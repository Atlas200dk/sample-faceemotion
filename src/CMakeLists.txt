# Copyright (c) Huawei Technologies Co., Ltd. 2019. All rights reserved.

# CMake lowest version requirement
cmake_minimum_required(VERSION 3.5.1)

# project information
project(sample-faceemotion)

# Compile options
add_compile_options(-std=c++11)

# Specify target generation path
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY  "../../outputs")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY  "../../outputs")
set(CMAKE_INSTALL_PREFIX "../../../run")
set(CMAKE_OUTPUT_DIR "out")


set(CMAKE_CXX_FLAGS_RELEASE "-fPIC -O2 -Wall")
#execute_process(COMMAND bash ../../../script/deploy.sh RESULT_VARIABLE ret)
#IF(${ret})
#   message(FATAL_ERROR "some error occured!")
#ENDIF(${ret})

# Header path
include_directories(
.
$ENV{DDK_PATH}/include/inc/
$ENV{DDK_PATH}/include/third_party/protobuf/include
$ENV{DDK_PATH}/include/third_party/cereal/include
$ENV{DDK_PATH}/include/libc_sec/include
$ENV{DDK_PATH}/include/third_party/opencv/include
$ENV{HOME}/ascend_ddk/include
Camera
common/include
face_detection_inference
face_emotion_inference
face_emotion_postprocess
)

if(type STREQUAL host)
    if(target STREQUAL "RC")
        add_compile_options(-DIS_RC)
    endif()

    # add host lib path
    link_directories($ENV{NPU_HOST_LIB}  $ENV{HOME}/ascend_ddk/host/lib $ENV{HOME}/ascend_ddk/device/lib /home/HwHiAiUser/HIAI_PROJECTS/ascend_lib)
    set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
    add_executable(main main.cpp)
    add_library(Host SHARED Camera/Mind_Camera.cpp face_emotion_postprocess/face_emotion_postprocess.cpp)


    if(target STREQUAL "RC")
        target_link_libraries(main matrixdaemon mmpa pthread dl rt)
        target_link_libraries(Host matrixdaemon hiai_common media_mini presenteragent ascend_ezdvpp)
    else()
        target_link_libraries(main matrix mmpa pthread dl rt)
        target_link_libraries(Host matrix hiai_common)
    endif()

    install(TARGETS main Host DESTINATION ${CMAKE_OUTPUT_DIR} PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE)
else()
    add_compile_options(-DCPU_ONLY)

    # add device lib path
    link_directories($ENV{NPU_DEV_LIB} $ENV{HOME}/ascend_ddk/host/lib $ENV{HOME}/ascend_ddk/device/lib /home/HwHiAiUser/HIAI_PROJECTS/ascend_lib)

    add_library(Device SHARED face_detection_inference/face_detection_inference.cpp face_emotion_inference/face_emotion_inference.cpp)

    if(target STREQUAL "RC")
        target_link_libraries(Device Dvpp_api Dvpp_jpeg_decoder Dvpp_jpeg_encoder Dvpp_vpc idedaemon hiai_common ascend_ezdvpp opencv_world media_mini hiai_server)
    else()
        target_link_libraries(Device Dvpp_api Dvpp_jpeg_decoder Dvpp_jpeg_encoder Dvpp_vpc idedaemon)
    endif()

    install(TARGETS Device DESTINATION ${CMAKE_OUTPUT_DIR} PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE)
endif()
