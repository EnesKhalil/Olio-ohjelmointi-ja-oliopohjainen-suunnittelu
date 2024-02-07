#include "devicedisplay.h"
#include <iostream>

using namespace std;

short DeviceDisplay::getDisplayResolution() const
{
    return displayResolution;
}

void DeviceDisplay::setDisplayResolution(short newDisplayResolution)
{
    displayResolution = newDisplayResolution;
}

DeviceDisplay::DeviceDisplay()
{

}
