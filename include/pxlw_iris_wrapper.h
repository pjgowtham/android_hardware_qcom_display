/*
 * SPDX-FileCopyrightText: 2025 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <cstdint>

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
}  // namespace common
}  // namespace graphics
}  // namespace hardware
}  // namespace android

namespace pxlw {

class PxlwIrisWrapper {
 public:
  static PxlwIrisWrapper *GetInstance();

 private:
  PxlwIrisWrapper() = default;
};

class PxlwSoftirisWrapper {
 public:
  PxlwSoftirisWrapper();
  virtual ~PxlwSoftirisWrapper();

  bool HasSoftIris();
  void InitPrimaryDisplay(int32_t vsync_period_ns, uint32_t width, uint32_t height);

  // out_brightness receives panel brightness from the service.
  // out_unknown receives an optional service value whose meaning is not yet established.
  // Stock soft-iris leaves out_unused unused; its role in other Iris wrappers is unknown.
  void BeforeCommitLayerStack(int display_id, int display_type, int &out_brightness,
                              int &out_unknown, int &out_unused);

  void SetColorModeWithRenderIntent(
      int32_t display_id, int32_t display_type,
      android::hardware::graphics::common::V1_2::ColorMode color_mode,
      android::hardware::graphics::common::V1_1::RenderIntent render_intent);

 private:
  friend class PxlwIrisWrapper;
};

}  // namespace pxlw
