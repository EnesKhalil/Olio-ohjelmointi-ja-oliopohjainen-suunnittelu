#ifndef DEVICEMOUSE_H
#define DEVICEMOUSE_H
#include"devicebaseclass.h"

class DeviceMouse: public DeviceBaseClass
{
private:
    short primaryButton;

public:
    DeviceMouse();

    short getPrimaryButton() const;
    void setPrimaryButton(short newPrimaryButton);
};

#endif // DEVICEMOUSE_H
