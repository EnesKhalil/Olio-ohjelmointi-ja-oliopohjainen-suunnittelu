#ifndef DEVICEBASECLASS_H
#define DEVICEBASECLASS_H


class DeviceBaseClass
{
protected:
    short deviceID;

public:
    DeviceBaseClass();

    short getDeviceID() const;

    void setDeviceID(short newDeviceID);
};

#endif // DEVICEBASECLASS_H
