#include "devicetouchpad.h"
#include <iostream>
using namespace std;

short DeviceTouchPad::getTouchPadSensitivity() const
{
    return touchPadSensitivity;
}

void DeviceTouchPad::setTouchPadSensitivity(short newTouchPadSensitivity)
{
    touchPadSensitivity = newTouchPadSensitivity;
}

DeviceTouchPad::DeviceTouchPad()
{

}
