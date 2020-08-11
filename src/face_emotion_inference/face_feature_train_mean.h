/**
 * ============================================================================
 *
 * Copyright (C) 2018, Hisilicon Technologies Co., Ltd. All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *   1 Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *
 *   2 Redistributions in binary form must reproduce the above copyright notice,
 *     this list of conditions and the following disclaimer in the documentation
 *     and/or other materials provided with the distribution.
 *
 *   3 Neither the names of the copyright holders nor the names of the
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 * ============================================================================
 */
#ifndef FACE_FEATURE_MASK_MEAN_H_
#define FACE_FEATURE_MASK_MEAN_H_
const float kTrainMean[4800] = {
  69, 81, 98, 69, 83, 101, 71, 85, 105, 73, 88, 111, 76, 92, 118, 80, 98, 126, 84, 103, 134, 89, 109, 142, 93, 114, 149, 98, 119, 156, 102, 124, 162, 107, 129, 168, 111,
  133, 173, 115, 137, 177, 118, 140, 181, 121, 143, 183, 123, 144, 185, 124, 146, 187, 125, 147, 187, 126, 147, 188, 126, 147, 188, 126, 147, 188, 125, 146, 187, 124, 145,
  186, 122, 144, 185, 120, 142, 183, 117, 139, 180, 114, 136, 176, 110, 132, 172, 106, 128, 167, 101, 123, 161, 97, 118, 154, 92, 113, 147, 87, 107, 139, 83, 101, 131, 78,
  96, 123, 74, 90, 114, 70, 85, 107, 68, 82, 101, 68, 80, 97, 69, 81, 98, 69, 83, 102, 71, 85, 107, 73, 89, 113, 77, 94, 121, 81, 100, 129, 86, 106, 137, 91, 111, 145, 95,
  116, 152, 100, 122, 159, 105, 127, 166, 110, 131, 171, 114, 136, 176, 118, 139, 180, 121, 143, 184, 124, 145, 187, 126, 147, 189, 127, 149, 190, 128, 149, 191, 129, 150,
  191, 129, 150, 191, 128, 149, 191, 128, 149, 191, 126, 148, 190, 125, 146, 188, 123, 144, 186, 120, 142, 183, 116, 138, 180, 112, 135, 175, 108, 131, 170, 104, 126, 165,
  99, 121, 158, 94, 115, 151, 89, 110, 143, 84, 104, 135, 80, 98, 126, 75, 92, 117, 71, 86, 109, 69, 83, 102, 68, 81, 98, 69, 82, 99, 70, 83, 103, 71, 86, 108, 74, 90, 115,
  78, 96, 123, 83, 101, 132, 88, 107, 140, 92, 113, 148, 97, 118, 155, 102, 123, 161, 107, 128, 168, 111, 133, 173, 115, 137, 178, 119, 141, 182, 123, 144, 186, 125, 147,
  189, 128, 149, 191, 129, 151, 192, 130, 151, 193, 131, 152, 194, 131, 152, 194, 130, 152, 194, 130, 151, 193, 128, 150, 192, 127, 148, 190, 124, 146, 188, 122, 143, 185,
  118, 140, 181, 114, 136, 177, 110, 132, 172, 106, 128, 167, 101, 123, 160, 96, 117, 154, 91, 112, 146, 86, 106, 137, 81, 100, 129, 77, 94, 120, 72, 88, 111, 69, 83, 104,
  68, 81, 99, 69, 82, 100, 70, 84, 104, 72, 87, 110, 75, 91, 117, 79, 97, 125, 84, 103, 134, 89, 109, 142, 94, 114, 149, 98, 119, 156, 102, 124, 162, 107, 129, 168, 111, 133,
  173, 115, 137, 178, 119, 141, 182, 123, 144, 186, 126, 147, 189, 128, 149, 191, 130, 151, 193, 131, 152, 194, 132, 153, 195, 132, 153, 195, 131, 153, 195, 131, 152, 194,
  129, 150, 193, 127, 148, 190, 125, 146, 188, 121, 143, 184, 118, 139, 180, 114, 136, 176, 110, 132, 172, 106, 128, 167, 102, 123, 161, 97, 118, 155, 92, 113, 147, 87, 107,
  139, 82, 101, 131, 77, 95, 122, 73, 89, 114, 70, 84, 106, 68, 82, 101, 69, 82, 101, 70, 84, 105, 72, 88, 111, 76, 92, 118, 80, 98, 127, 85, 104, 135, 89, 109, 143, 94, 115,
  150, 98, 119, 156, 102, 123, 161, 106, 128, 166, 110, 131, 171, 114, 135, 175, 117, 138, 179, 121, 142, 183, 124, 145, 187, 127, 148, 190, 129, 150, 193, 131, 152, 195,
  132, 153, 196, 132, 153, 196, 131, 152, 195, 130, 151, 194, 128, 149, 191, 125, 146, 188, 122, 143, 185, 119, 140, 181, 116, 137, 177, 112, 133, 173, 109, 130, 169, 105,
  126, 165, 101, 122, 160, 97, 118, 154, 92, 113, 148, 88, 108, 141, 83, 102, 133, 78, 96, 124, 74, 91, 116, 71, 86, 108, 69, 82, 102, 69, 83, 102, 71, 85, 107, 73, 89, 113,
  76, 93, 120, 81, 99, 128, 85, 105, 136, 90, 110, 143, 94, 114, 149, 97, 118, 154, 101, 121, 158, 104, 125, 163, 107, 128, 166, 110, 130, 170, 113, 133, 173, 116, 137, 178,
  120, 141, 182, 124, 144, 186, 127, 148, 190, 129, 150, 193, 130, 151, 194, 131, 151, 195, 130, 151, 194, 128, 149, 191, 125, 146, 188, 122, 142, 184, 118, 138, 179, 115,
  135, 175, 111, 131, 171, 108, 129, 168, 106, 126, 164, 103, 123, 161, 100, 120, 157, 96, 117, 153, 92, 113, 148, 88, 108, 141, 84, 103, 134, 79, 97, 126, 75, 92, 118, 71,
  87, 110, 69, 83, 104, 70, 84, 103, 72, 86, 108, 74, 90, 115, 77, 95, 122, 82, 100, 129, 86, 105, 136, 89, 109, 142, 92, 112, 147, 95, 115, 151, 98, 118, 154, 100, 120, 157,
  103, 122, 160, 105, 124, 163, 107, 127, 166, 110, 130, 170, 114, 134, 175, 118, 139, 180, 122, 143, 185, 125, 146, 189, 127, 148, 192, 128, 149, 192, 126, 147, 190, 123,
  144, 187, 120, 140, 182, 115, 136, 177, 111, 131, 172, 108, 128, 167, 105, 125, 163, 103, 122, 160, 101, 120, 158, 99, 119, 156, 97, 117, 154, 95, 115, 150, 92, 112, 146,
  88, 108, 141, 84, 103, 135, 80, 98, 127, 76, 93, 120, 73, 88, 112, 70, 84, 105, 71, 84, 105, 72, 87, 110, 75, 91, 117, 78, 96, 123, 82, 100, 130, 85, 104, 136, 88, 107,
  140, 90, 110, 144, 92, 111, 146, 94, 113, 148, 96, 114, 150, 97, 116, 152, 99, 117, 154, 101, 119, 157, 103, 122, 161, 106, 126, 166, 111, 131, 172, 116, 136, 179, 120,
  141, 184, 123, 144, 188, 124, 145, 188, 122, 143, 186, 118, 139, 182, 113, 133, 175, 108, 128, 169, 104, 123, 163, 101, 119, 158, 98, 117, 154, 97, 115, 151, 96, 114, 150,
  95, 113, 149, 94, 113, 148, 92, 112, 147, 90, 110, 144, 87, 107, 140, 84, 103, 135, 81, 99, 129, 78, 95, 122, 74, 90, 115, 71, 85, 107, 71, 85, 107, 74, 89, 112, 77, 93,
  119, 80, 97, 125, 83, 101, 131, 85, 104, 136, 87, 106, 139, 88, 107, 141, 89, 107, 141, 90, 107, 141, 90, 108, 142, 91, 108, 142, 92, 109, 144, 94, 111, 147, 96, 114, 151,
  99, 118, 157, 103, 123, 164, 108, 129, 171, 114, 135, 178, 118, 140, 183, 119, 141, 184, 117, 138, 182, 112, 133, 176, 106, 126, 168, 101, 120, 160, 97, 115, 154, 94, 111,
  148, 91, 108, 144, 91, 107, 142, 90, 107, 141, 89, 107, 141, 89, 107, 141, 89, 107, 142, 88, 107, 141, 86, 106, 139, 84, 103, 135, 82, 100, 130, 79, 97, 124, 76, 92, 117,
  73, 87, 110, 73, 87, 109, 75, 91, 115, 78, 94, 121, 81, 99, 127, 84, 102, 133, 85, 104, 136, 86, 104, 137, 86, 104, 138, 86, 103, 137, 86, 102, 136, 86, 102, 135, 86, 102,
  134, 87, 102, 136, 88, 104, 139, 90, 107, 143, 93, 111, 149, 97, 116, 156, 103, 123, 165, 109, 130, 173, 114, 136, 179, 116, 137, 181, 113, 134, 177, 107, 128, 170, 100,
  120, 162, 95, 114, 153, 91, 109, 147, 88, 105, 141, 86, 102, 136, 85, 100, 133, 85, 100, 132, 85, 101, 133, 85, 102, 135, 85, 103, 137, 85, 104, 138, 86, 105, 138, 85, 104,
  136, 83, 102, 132, 81, 98, 127, 77, 94, 120, 74, 89, 113, 74, 89, 112, 77, 92, 118, 80, 96, 124, 83, 100, 130, 85, 104, 135, 86, 105, 137, 85, 104, 137, 85, 103, 136, 84,
  101, 134, 83, 99, 132, 83, 98, 130, 83, 97, 129, 83, 97, 130, 84, 99, 132, 86, 102, 138, 88, 106, 144, 92, 111, 151, 98, 119, 160, 106, 127, 170, 111, 133, 177, 113, 135,
  179, 110, 132, 175, 104, 125, 167, 96, 116, 158, 91, 109, 149, 87, 104, 141, 84, 100, 135, 82, 97, 130, 81, 95, 127, 81, 95, 126, 81, 96, 128, 83, 99, 132, 84, 101, 135,
  85, 103, 137, 85, 104, 138, 85, 105, 137, 84, 103, 135, 82, 100, 130, 79, 96, 123, 76, 92, 117, 76, 91, 115, 78, 94, 121, 82, 99, 127, 85, 103, 133, 87, 106, 138, 88, 106,
  140, 86, 105, 139, 85, 103, 137, 84, 100, 134, 82, 97, 130, 81, 96, 127, 81, 95, 126, 82, 95, 127, 83, 97, 131, 86, 101, 136, 88, 105, 143, 91, 110, 150, 97, 117, 159, 104,
  126, 169, 110, 132, 176, 113, 135, 179, 110, 131, 175, 103, 124, 167, 96, 115, 157, 90, 108, 148, 86, 103, 141, 84, 99, 134, 83, 96, 130, 81, 94, 126, 80, 94, 125, 80, 95,
  127, 82, 98, 131, 83, 100, 135, 85, 104, 138, 87, 106, 140, 87, 107, 140, 86, 105, 138, 84, 103, 133, 81, 98, 127, 78, 94, 120, 77, 93, 118, 80, 97, 124, 84, 101, 130, 87,
  105, 136, 89, 108, 141, 90, 109, 143, 89, 108, 143, 88, 106, 141, 86, 103, 137, 85, 100, 134, 84, 98, 131, 83, 97, 129, 84, 97, 130, 85, 99, 134, 87, 103, 139, 90, 107,
  145, 93, 111, 152, 98, 119, 161, 105, 126, 170, 111, 133, 177, 114, 136, 180, 111, 133, 177, 105, 126, 169, 98, 118, 160, 92, 111, 152, 89, 106, 145, 87, 102, 138, 86, 100,
  134, 84, 98, 131, 83, 97, 130, 84, 98, 131, 85, 101, 135, 86, 104, 139, 88, 107, 142, 90, 109, 145, 90, 110, 144, 89, 108, 141, 87, 105, 137, 83, 101, 130, 80, 96, 123, 79,
  94, 120, 82, 98, 126, 85, 103, 133, 89, 108, 140, 92, 111, 145, 94, 113, 148, 93, 112, 148, 93, 111, 148, 92, 109, 145, 91, 107, 142, 90, 105, 140, 89, 104, 138, 89, 104,
  138, 90, 105, 141, 92, 108, 145, 94, 111, 151, 96, 115, 157, 102, 122, 165, 108, 129, 173, 113, 135, 180, 116, 137, 183, 113, 135, 180, 108, 129, 174, 102, 122, 166, 97,
  116, 158, 95, 112, 152, 93, 109, 146, 91, 106, 142, 90, 104, 139, 90, 104, 139, 90, 105, 141, 91, 108, 144, 92, 110, 147, 93, 112, 149, 94, 114, 151, 94, 114, 150, 92, 112,
  146, 89, 108, 140, 85, 103, 133, 81, 98, 126, 80, 96, 122, 83, 100, 129, 87, 105, 136, 91, 110, 143, 95, 114, 149, 97, 117, 153, 98, 118, 155, 98, 118, 156, 98, 116, 154,
  98, 115, 153, 97, 113, 151, 97, 112, 150, 97, 113, 150, 97, 113, 151, 98, 115, 154, 100, 118, 159, 102, 121, 164, 106, 126, 170, 111, 132, 178, 116, 138, 184, 118, 140,
  186, 116, 138, 184, 112, 133, 178, 107, 127, 172, 103, 122, 165, 101, 119, 160, 99, 116, 156, 99, 115, 153, 98, 113, 151, 97, 113, 151, 97, 114, 152, 98, 116, 154, 99, 118,
  156, 99, 119, 158, 99, 119, 157, 98, 118, 155, 95, 115, 150, 91, 110, 144, 87, 105, 136, 83, 100, 129, 81, 97, 124, 84, 101, 131, 88, 106, 138, 93, 112, 145, 97, 117, 152,
  100, 120, 158, 103, 123, 161, 104, 124, 164, 105, 124, 164, 106, 124, 164, 106, 123, 164, 106, 123, 163, 106, 123, 163, 105, 123, 163, 105, 123, 165, 105, 124, 167, 107,
  127, 171, 110, 131, 176, 115, 136, 183, 119, 140, 188, 121, 142, 189, 119, 140, 188, 115, 137, 183, 111, 132, 178, 108, 128, 173, 106, 125, 169, 106, 124, 166, 106, 123,
  164, 106, 123, 164, 106, 123, 164, 106, 124, 165, 106, 125, 166, 106, 126, 166, 105, 126, 166, 104, 124, 163, 101, 121, 159, 97, 117, 153, 93, 112, 146, 88, 107, 138, 84,
  101, 131, 82, 98, 126, 85, 102, 132, 89, 107, 139, 94, 113, 147, 99, 118, 155, 103, 123, 161, 106, 127, 167, 109, 129, 171, 111, 131, 173, 112, 132, 174, 113, 132, 174,
  113, 131, 174, 113, 131, 174, 112, 131, 174, 111, 130, 174, 110, 130, 175, 111, 132, 177, 114, 135, 181, 118, 139, 186, 121, 143, 191, 123, 144, 192, 121, 143, 191, 118,
  140, 187, 115, 136, 183, 112, 133, 179, 112, 132, 177, 112, 131, 175, 113, 132, 175, 114, 132, 175, 114, 132, 175, 114, 133, 176, 114, 133, 176, 112, 132, 175, 110, 131,
  173, 107, 128, 169, 103, 123, 162, 98, 118, 155, 94, 113, 148, 89, 107, 140, 85, 102, 132, 83, 99, 126, 86, 102, 132, 89, 107, 139, 94, 113, 148, 99, 119, 156, 104, 124,
  163, 109, 129, 170, 113, 133, 175, 116, 136, 179, 118, 137, 182, 119, 138, 183, 119, 138, 183, 119, 138, 183, 117, 136, 182, 115, 135, 181, 114, 134, 180, 114, 135, 182,
  116, 137, 185, 120, 141, 189, 123, 144, 193, 124, 145, 194, 123, 144, 193, 120, 141, 190, 117, 138, 186, 115, 136, 183, 115, 136, 182, 117, 136, 182, 118, 138, 183, 119,
  139, 184, 120, 139, 184, 120, 140, 184, 119, 139, 184, 117, 137, 182, 114, 134, 178, 110, 130, 172, 104, 125, 165, 99, 119, 157, 94, 113, 148, 89, 107, 140, 85, 103, 133,
  83, 99, 126, 85, 102, 132, 89, 106, 139, 93, 112, 147, 99, 118, 156, 104, 124, 164, 109, 130, 172, 114, 135, 178, 118, 138, 183, 121, 141, 187, 123, 142, 189, 123, 142,
  189, 122, 142, 188, 120, 140, 187, 118, 138, 185, 116, 136, 184, 116, 136, 184, 117, 138, 186, 121, 141, 190, 123, 144, 193, 124, 145, 194, 123, 144, 193, 120, 141, 190,
  118, 138, 187, 116, 137, 185, 116, 137, 184, 118, 138, 186, 121, 141, 188, 123, 143, 189, 124, 144, 190, 124, 144, 190, 122, 142, 189, 119, 140, 185, 115, 136, 180, 110,
  131, 173, 104, 124, 165, 98, 118, 156, 93, 112, 148, 88, 107, 139, 85, 102, 133, 83, 99, 126, 85, 102, 132, 88, 106, 138, 92, 111, 146, 98, 117, 155, 103, 123, 163, 109,
  129, 171, 114, 135, 179, 119, 139, 185, 122, 143, 189, 124, 144, 192, 124, 144, 192, 123, 143, 191, 121, 141, 189, 118, 138, 186, 115, 136, 184, 115, 135, 184, 116, 136,
  186, 119, 139, 188, 122, 141, 191, 123, 142, 192, 121, 141, 191, 119, 139, 188, 116, 136, 186, 115, 135, 184, 115, 135, 184, 117, 138, 186, 121, 141, 189, 124, 144, 192,
  125, 145, 193, 125, 145, 193, 123, 143, 191, 120, 140, 187, 115, 136, 181, 109, 130, 173, 103, 123, 164, 97, 117, 155, 92, 111, 147, 88, 106, 138, 85, 102, 132, 83, 99,
  126, 85, 102, 131, 88, 105, 137, 91, 110, 144, 96, 115, 153, 101, 121, 161, 107, 127, 170, 113, 133, 178, 118, 138, 184, 121, 142, 189, 123, 143, 192, 124, 144, 192, 122,
  142, 191, 120, 140, 188, 116, 136, 185, 113, 133, 182, 112, 132, 181, 113, 132, 182, 116, 135, 184, 118, 137, 186, 118, 137, 187, 117, 136, 186, 115, 134, 184, 113, 132,
  182, 112, 132, 181, 113, 132, 182, 115, 135, 184, 119, 139, 187, 122, 142, 191, 124, 144, 192, 124, 144, 192, 122, 142, 190, 118, 139, 186, 113, 134, 179, 107, 128, 171,
  101, 121, 162, 96, 115, 153, 91, 110, 145, 87, 105, 137, 85, 101, 131, 83, 98, 125, 85, 101, 130, 87, 104, 135, 90, 108, 142, 94, 113, 150, 99, 119, 159, 105, 125, 167,
  110, 130, 175, 115, 135, 182, 119, 139, 187, 121, 141, 190, 121, 142, 191, 120, 140, 189, 117, 137, 186, 114, 133, 182, 111, 130, 179, 109, 128, 177, 109, 128, 177, 110,
  129, 178, 112, 130, 179, 113, 131, 180, 112, 130, 179, 110, 129, 178, 109, 128, 177, 109, 128, 177, 110, 129, 178, 112, 132, 181, 116, 135, 184, 119, 139, 188, 121, 141,
  190, 121, 141, 190, 119, 139, 188, 115, 136, 183, 110, 131, 177, 105, 125, 168, 99, 119, 159, 94, 113, 151, 89, 108, 143, 86, 104, 136, 84, 101, 130, 83, 98, 124, 84, 100,
  128, 86, 103, 134, 89, 107, 140, 93, 112, 148, 97, 117, 156, 102, 122, 164, 107, 127, 172, 112, 132, 179, 115, 136, 184, 118, 138, 187, 118, 138, 188, 117, 137, 187, 115,
  134, 184, 111, 131, 180, 108, 127, 176, 106, 124, 173, 105, 123, 172, 105, 123, 172, 106, 124, 172, 107, 124, 173, 106, 124, 172, 105, 123, 172, 104, 123, 171, 105, 123,
  172, 107, 126, 175, 110, 129, 178, 113, 133, 181, 115, 136, 185, 117, 137, 186, 117, 137, 186, 115, 136, 184, 112, 132, 180, 107, 128, 173, 102, 122, 165, 96, 116, 157, 92,
  111, 148, 88, 106, 140, 85, 103, 134, 84, 100, 128, 83, 98, 123, 84, 100, 127, 86, 102, 132, 88, 106, 138, 92, 110, 146, 96, 115, 153, 100, 120, 161, 104, 124, 168, 108,
  128, 174, 111, 132, 179, 113, 134, 182, 114, 135, 183, 114, 134, 183, 112, 132, 181, 110, 129, 177, 107, 125, 174, 104, 122, 171, 103, 120, 168, 102, 119, 167, 102, 119,
  167, 102, 119, 167, 102, 119, 167, 102, 119, 167, 102, 120, 167, 103, 121, 169, 105, 124, 172, 108, 127, 175, 110, 130, 178, 112, 132, 181, 113, 133, 182, 112, 133, 181,
  111, 132, 180, 108, 129, 175, 104, 124, 169, 99, 119, 162, 94, 114, 153, 90, 110, 146, 87, 105, 139, 84, 102, 132, 83, 99, 127, 83, 98, 122, 84, 99, 125, 85, 102, 130, 87,
  104, 136, 90, 109, 143, 94, 113, 150, 97, 117, 157, 101, 121, 164, 104, 125, 170, 107, 128, 175, 109, 130, 178, 110, 131, 179, 110, 131, 178, 109, 129, 177, 108, 127, 175,
  106, 125, 172, 104, 122, 169, 103, 120, 167, 102, 118, 166, 101, 118, 165, 101, 118, 165, 101, 118, 165, 101, 118, 165, 102, 119, 166, 103, 121, 168, 105, 123, 170, 107,
  126, 173, 108, 128, 175, 109, 129, 177, 109, 129, 177, 108, 129, 177, 107, 128, 175, 104, 126, 171, 101, 122, 165, 96, 117, 158, 92, 112, 151, 89, 108, 143, 86, 104, 136,
  84, 101, 130, 83, 98, 126, 82, 97, 120, 83, 98, 124, 85, 100, 128, 87, 103, 134, 89, 107, 141, 92, 111, 148, 95, 115, 154, 98, 119, 160, 101, 122, 166, 104, 125, 170, 105,
  126, 173, 106, 127, 174, 106, 127, 173, 106, 126, 173, 106, 125, 172, 106, 124, 170, 105, 122, 169, 104, 121, 167, 103, 119, 166, 103, 119, 165, 103, 118, 165, 103, 118,
  165, 103, 119, 165, 103, 120, 166, 104, 121, 167, 104, 123, 169, 105, 124, 170, 106, 125, 171, 105, 126, 172, 105, 126, 172, 104, 126, 172, 103, 125, 170, 101, 123, 167,
  98, 119, 161, 94, 115, 155, 91, 111, 148, 88, 107, 141, 85, 103, 134, 83, 100, 129, 82, 98, 124, 82, 96, 119, 83, 97, 122, 84, 100, 127, 86, 103, 132, 89, 106, 138, 91,
  110, 145, 94, 114, 151, 96, 117, 157, 99, 120, 163, 101, 122, 166, 102, 123, 168, 102, 123, 169, 102, 123, 168, 103, 122, 168, 103, 122, 167, 104, 121, 167, 104, 121, 167,
  104, 120, 166, 104, 119, 166, 104, 119, 166, 104, 119, 166, 104, 119, 165, 103, 119, 165, 103, 119, 165, 103, 119, 165, 103, 120, 166, 103, 121, 166, 102, 121, 166, 102,
  122, 167, 102, 122, 168, 101, 123, 168, 101, 122, 167, 99, 121, 163, 96, 117, 158, 93, 113, 152, 90, 109, 145, 87, 106, 139, 85, 102, 133, 83, 99, 127, 82, 97, 123, 82, 95,
  117, 82, 96, 120, 84, 99, 124, 85, 102, 130, 88, 105, 136, 91, 109, 143, 93, 113, 149, 96, 116, 155, 98, 119, 160, 99, 121, 163, 100, 121, 165, 99, 120, 165, 99, 119, 164,
  99, 118, 163, 99, 117, 162, 100, 117, 163, 101, 117, 163, 102, 117, 164, 103, 117, 164, 103, 117, 165, 103, 117, 165, 103, 117, 164, 102, 117, 164, 101, 116, 163, 100, 115,
  162, 99, 115, 161, 98, 115, 160, 98, 116, 161, 98, 118, 162, 99, 119, 163, 99, 121, 164, 99, 121, 163, 97, 119, 161, 95, 116, 155, 92, 112, 149, 89, 108, 143, 87, 105, 137,
  85, 102, 131, 83, 99, 125, 82, 97, 121, 82, 95, 116, 82, 96, 119, 83, 98, 123, 85, 101, 128, 87, 104, 134, 90, 108, 140, 92, 112, 147, 95, 115, 152, 97, 118, 157, 98, 120,
  161, 98, 120, 162, 98, 119, 162, 97, 116, 160, 95, 114, 158, 95, 112, 157, 96, 112, 157, 97, 112, 158, 99, 113, 160, 101, 114, 162, 102, 114, 163, 102, 115, 163, 102, 114,
  163, 101, 113, 161, 99, 112, 160, 97, 111, 158, 95, 110, 156, 94, 111, 156, 94, 112, 157, 95, 115, 158, 97, 117, 160, 98, 119, 162, 98, 119, 161, 96, 118, 158, 94, 115,
  153, 91, 111, 147, 88, 107, 140, 86, 104, 134, 84, 101, 129, 83, 98, 124, 82, 96, 120, 81, 94, 115, 82, 95, 117, 82, 97, 121, 84, 99, 125, 86, 103, 131, 89, 106, 137, 91,
  110, 144, 94, 114, 150, 96, 117, 155, 98, 119, 159, 98, 119, 161, 97, 118, 160, 95, 115, 159, 94, 112, 156, 92, 109, 154, 92, 107, 154, 94, 108, 155, 96, 109, 157, 99, 110,
  159, 100, 111, 160, 101, 112, 161, 100, 112, 161, 99, 111, 160, 97, 109, 158, 95, 108, 156, 93, 107, 154, 93, 108, 154, 93, 111, 155, 94, 114, 157, 96, 117, 159, 97, 118,
  160, 97, 118, 159, 95, 117, 155, 93, 113, 150, 90, 109, 144, 87, 105, 138, 85, 102, 132, 83, 99, 126, 82, 97, 122, 81, 95, 118, 81, 93, 113, 81, 94, 116, 82, 96, 119, 83,
  98, 123, 85, 101, 128, 87, 104, 134, 90, 108, 141, 93, 112, 147, 95, 116, 152, 97, 118, 157, 98, 119, 160, 97, 118, 160, 96, 116, 159, 94, 113, 157, 93, 109, 155, 92, 107,
  154, 94, 107, 155, 96, 107, 157, 98, 109, 159, 99, 110, 160, 100, 110, 161, 100, 110, 161, 98, 109, 159, 96, 108, 157, 94, 107, 156, 93, 107, 155, 93, 108, 155, 94, 111,
  156, 95, 114, 158, 96, 117, 159, 97, 118, 159, 96, 118, 157, 94, 115, 152, 91, 111, 147, 88, 107, 141, 86, 104, 135, 84, 101, 129, 82, 98, 124, 81, 96, 120, 80, 93, 116,
  80, 92, 112, 80, 93, 114, 81, 95, 117, 82, 96, 121, 83, 99, 125, 86, 102, 131, 88, 106, 137, 91, 110, 143, 93, 113, 149, 96, 117, 154, 98, 119, 158, 98, 119, 160, 97, 117,
  161, 96, 115, 160, 95, 112, 159, 94, 109, 158, 95, 108, 158, 97, 108, 159, 98, 109, 161, 100, 110, 162, 100, 110, 162, 100, 110, 162, 99, 109, 161, 97, 108, 159, 96, 108,
  158, 95, 109, 158, 95, 111, 158, 96, 114, 159, 97, 116, 160, 97, 118, 160, 97, 118, 158, 95, 116, 154, 92, 113, 149, 89, 109, 143, 86, 105, 137, 84, 102, 131, 83, 99, 126,
  82, 97, 122, 80, 94, 117, 79, 92, 114, 80, 92, 111, 80, 92, 112, 81, 93, 115, 81, 95, 118, 82, 97, 123, 84, 100, 128, 86, 104, 133, 89, 107, 139, 92, 111, 145, 94, 115,
  151, 97, 118, 156, 98, 119, 159, 98, 119, 161, 98, 118, 162, 98, 115, 162, 97, 113, 162, 97, 112, 162, 98, 111, 163, 99, 111, 164, 101, 112, 165, 101, 112, 165, 101, 112,
  165, 100, 111, 164, 99, 111, 163, 98, 112, 162, 98, 113, 162, 98, 115, 162, 98, 117, 162, 98, 119, 162, 98, 119, 160, 96, 117, 156, 93, 114, 151, 90, 110, 145, 87, 106,
  139, 85, 103, 133, 83, 100, 128, 82, 97, 123, 80, 95, 119, 79, 93, 115, 79, 92, 112, 80, 91, 110, 80, 91, 111, 80, 92, 113, 80, 93, 116, 81, 95, 120, 83, 98, 124, 84, 101,
  129, 86, 104, 135, 89, 108, 141, 92, 112, 147, 95, 115, 152, 97, 118, 157, 99, 119, 160, 100, 120, 163, 100, 119, 164, 100, 117, 165, 100, 116, 165, 100, 115, 166, 101,
  114, 166, 102, 114, 167, 102, 114, 167, 102, 114, 167, 101, 114, 166, 101, 115, 166, 101, 116, 166, 101, 117, 165, 100, 119, 165, 100, 120, 164, 99, 120, 161, 97, 118, 158,
  95, 115, 153, 91, 111, 147, 88, 107, 141, 85, 104, 135, 83, 100, 130, 82, 98, 125, 80, 95, 121, 79, 93, 117, 79, 92, 114, 79, 91, 111, 80, 91, 109, 80, 91, 110, 79, 91,
  112, 79, 92, 114, 80, 94, 117, 81, 95, 121, 82, 98, 125, 85, 101, 131, 87, 105, 136, 90, 109, 142, 93, 113, 148, 95, 116, 154, 98, 119, 158, 100, 120, 162, 101, 121, 165,
  102, 121, 167, 102, 120, 168, 103, 119, 168, 103, 118, 169, 103, 118, 169, 103, 118, 169, 103, 118, 169, 103, 118, 169, 103, 119, 168, 103, 120, 168, 102, 121, 167, 102,
  121, 166, 100, 121, 163, 98, 119, 159, 96, 116, 155, 93, 113, 149, 89, 109, 143, 86, 104, 136, 83, 101, 131, 82, 98, 126, 80, 96, 122, 80, 94, 118, 79, 92, 115, 78, 91,
  112, 79, 91, 110, 81, 91, 109, 80, 91, 109, 79, 90, 110, 79, 91, 112, 79, 92, 115, 80, 94, 118, 81, 96, 122, 83, 99, 127, 85, 102, 132, 87, 106, 138, 90, 110, 144, 93, 113,
  149, 96, 117, 155, 99, 119, 160, 102, 122, 164, 103, 123, 167, 104, 123, 169, 105, 123, 170, 105, 122, 171, 105, 122, 171, 106, 122, 171, 106, 122, 171, 105, 122, 171, 105,
  122, 170, 105, 123, 169, 104, 123, 168, 102, 122, 165, 100, 120, 161, 97, 117, 156, 94, 114, 151, 90, 110, 144, 87, 106, 138, 84, 101, 132, 82, 98, 127, 80, 96, 123, 79,
  94, 119, 79, 93, 116, 78, 91, 113, 78, 91, 111, 79, 91, 110, 81, 91, 108, 80, 90, 109, 79, 90, 110, 79, 90, 111, 79, 91, 113, 79, 92, 116, 79, 93, 119, 81, 96, 123, 83, 99,
  128, 85, 102, 133, 88, 106, 138, 91, 110, 144, 94, 114, 150, 97, 117, 156, 100, 120, 161, 103, 123, 165, 105, 124, 168, 106, 125, 170, 107, 125, 172, 108, 125, 173, 108,
  125, 173, 108, 125, 173, 108, 125, 172, 107, 125, 171, 106, 125, 169, 104, 123, 166, 101, 121, 162, 98, 118, 157, 95, 115, 152, 91, 111, 146, 88, 106, 139, 84, 102, 133,
  82, 99, 128, 80, 96, 123, 79, 94, 120, 79, 93, 117, 79, 92, 115, 78, 91, 112, 79, 91, 111, 80, 91, 110, 82, 92, 109, 81, 91, 109, 80, 91, 110, 79, 90, 110, 79, 91, 112, 79,
  91, 114, 78, 92, 116, 79, 94, 120, 81, 96, 124, 83, 99, 128, 85, 102, 133, 88, 106, 139, 91, 110, 145, 94, 114, 151, 98, 117, 156, 101, 121, 161, 104, 123, 166, 106, 125,
  169, 108, 126, 171, 109, 127, 172, 109, 127, 173, 109, 127, 172, 108, 126, 171, 107, 125, 169, 105, 124, 167, 102, 121, 163, 99, 118, 158, 96, 115, 152, 92, 111, 147, 89,
  107, 140, 85, 103, 134, 82, 99, 128, 80, 96, 124, 79, 94, 120, 78, 93, 118, 78, 92, 116, 79, 92, 114, 79, 91, 112, 80, 92, 111, 81, 92, 110, 82, 92, 109, 82, 92, 109, 81,
  91, 110, 80, 91, 110, 79, 90, 111, 78, 90, 113, 78, 91, 114, 78, 92, 117, 79, 94, 120, 81, 96, 124, 82, 99, 128, 84, 102, 133, 87, 105, 138, 91, 109, 144, 94, 113, 150, 97,
  116, 155, 100, 119, 160, 103, 122, 164, 105, 123, 166, 106, 124, 168, 107, 125, 169, 106, 124, 168, 105, 124, 167, 104, 122, 164, 101, 120, 161, 98, 117, 156, 95, 114, 151,
  92, 110, 146, 89, 107, 140, 85, 102, 134, 82, 99, 129, 80, 96, 124, 79, 94, 121, 78, 93, 118, 78, 92, 116, 79, 92, 114, 79, 91, 113, 80, 92, 112, 82, 93, 112, 82, 93, 111,
  83, 93, 109, 83, 92, 110, 82, 92, 110, 81, 91, 111, 80, 91, 112, 79, 91, 112, 78, 91, 113, 78, 91, 115, 79, 93, 118, 79, 94, 121, 80, 96, 124, 82, 98, 127, 84, 100, 132,
  86, 104, 137, 89, 107, 142, 93, 111, 147, 95, 114, 152, 98, 116, 156, 100, 118, 159, 101, 119, 161, 102, 119, 162, 101, 119, 161, 100, 118, 159, 98, 116, 157, 96, 114, 153,
  94, 111, 149, 91, 108, 144, 88, 105, 139, 84, 101, 133, 82, 98, 128, 80, 96, 124, 79, 94, 121, 78, 92, 118, 78, 92, 116, 78, 91, 115, 79, 92, 114, 80, 92, 113, 82, 93, 113,
  83, 94, 112, 84, 94, 112
};

#endif