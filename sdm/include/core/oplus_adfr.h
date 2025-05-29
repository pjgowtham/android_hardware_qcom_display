/*
* Copyright (c) 2025 Qualcomm Innovation Center, Inc. All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted (subject to the limitations in the
* disclaimer below) provided that the following conditions are met:
*
*    * Redistributions of source code must retain the above copyright
*      notice, this list of conditions and the following disclaimer.
*
*    * Redistributions in binary form must reproduce the above
*      copyright notice, this list of conditions and the following
*      disclaimer in the documentation and/or other materials provided
*      with the distribution.
*
*    * Neither the name of Qualcomm Innovation Center, Inc. nor the names of its
*      contributors may be used to endorse or promote products derived
*      from this software without specific prior written permission.
*
* NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE
* GRANTED BY THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT
* HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
* MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
* ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
* GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
* IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
* OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
* IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef __OPLUS_ADFR_H__
#define __OPLUS_ADFR_H__

namespace oplus {

// ADFR Auto Mode magic numbers for kernel driver interface
#define OPLUS_ADFR_AUTO_MAGIC           0x00F1C001
#define OPLUS_ADFR_AUTO_MODE_MAGIC      0x00F1C002
#define OPLUS_ADFR_AUTO_MIN_FPS_MAGIC   0x00F1C003

// ADFR Auto Mode states
#define OPLUS_ADFR_AUTO_OFF     0
#define OPLUS_ADFR_AUTO_ON      1

// ADFR Auto Mode min FPS values
#define OPLUS_ADFR_AUTO_MIN_FPS_10HZ    0x001

// Enum for ADFR Auto Mode states
enum class AutoMode {
  kOff = 0,
  kOn = 1,
};

// Enum for ADFR min FPS values
enum class MinFps {
  k10Hz = OPLUS_ADFR_AUTO_MIN_FPS_10HZ,
};

} // namespace oplus

#endif // __OPLUS_ADFR_H__
