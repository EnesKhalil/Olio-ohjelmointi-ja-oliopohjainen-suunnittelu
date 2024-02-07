#ifndef DEVICEDISPLAY_H
#define DEVICEDISPLAY_H
#include"devicebaseclass.h"


class DeviceDisplay: public DeviceBaseClass{

private:
    short displayResolution;

public:
    DeviceDisplay();

    short getDisplayResolution() const;
    void setDisplayResolution(short newDisplayResolution);
};

#endif // DEVICEDISPLAY_H
