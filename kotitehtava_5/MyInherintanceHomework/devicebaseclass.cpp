#include "devicebaseclass.h"
#include <iostream>

using namespace std;


short DeviceBaseClass::getDeviceID() const
{
    return deviceID;
}

void DeviceBaseClass::setDeviceID(short newDeviceID)
{
    deviceID = newDeviceID;
}

DeviceBaseClass::DeviceBaseClass()
{

}
