/*
 * SPDX-FileCopyrightText: 2025 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <string>
#include <functional>
#include <hidl/HidlSupport.h>
#include <utils/Log.h>

namespace pxlw {

class IrisService {
public:
    void irisConfigureBatch(
        int param_1,
        const ::android::hardware::hidl_string& param_2,
        std::function<void(int, const ::android::hardware::hidl_string&)> param_3);
};

} // namespace pxlw

