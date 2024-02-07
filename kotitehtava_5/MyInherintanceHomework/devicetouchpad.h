#ifndef DEVICETOUCHPAD_H
#define DEVICETOUCHPAD_H
#include "devicebaseclass.h"

class DeviceTouchPad: public DeviceBaseClass
{
private:
    short touchPadSensitivity;

public:
    DeviceTouchPad();

    short getTouchPadSensitivity() const;
    void setTouchPadSensitivity(short newTouchPadSensitivity);
};

#endif // DEVICETOUCHPAD_H
