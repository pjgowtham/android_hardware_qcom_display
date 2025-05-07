/*
 * SPDX-FileCopyrightText: 2025 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

namespace android {
namespace hardware {
namespace graphics {
namespace common {
namespace V1_1 {
enum class RenderIntent : int32_t;
}
namespace V1_2 {
enum class ColorMode : int32_t;
}
}
}
}
}

namespace pxlw {

class PxlwIrisWrapper {
public:
    static PxlwIrisWrapper* GetInstance();
    static int GetIrisDisplayType(int param_1, int param_2);

private:
    PxlwIrisWrapper() = default;
};

class PxlwSoftirisWrapper {
public:
    int InitPrimaryDisplay(int param_1, unsigned int param_2, unsigned int param_3);
    void SetColorModeWithRenderIntent(int param_1, int param_2, 
                                    android::hardware::graphics::common::V1_2::ColorMode param_3,
                                    android::hardware::graphics::common::V1_1::RenderIntent param_4);

private:
    PxlwSoftirisWrapper() = default;
    
    friend class PxlwIrisWrapper;
};

} // namespace pxlw
