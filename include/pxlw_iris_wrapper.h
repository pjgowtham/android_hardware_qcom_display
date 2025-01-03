#ifndef PXLW_PXLW_IRIS_WRAPPER_H
#define PXLW_PXLW_IRIS_WRAPPER_H

namespace pxlw {

class PxlwIrisWrapper {
public:
    // Static method to obtain the instance
    static PxlwIrisWrapper* GetInstance();

private:
    // Constructor is private to enforce singleton pattern
    PxlwIrisWrapper() = default;
};

} // namespace pxlw

#endif // PXLW_PXLW_IRIS_WRAPPER_H
