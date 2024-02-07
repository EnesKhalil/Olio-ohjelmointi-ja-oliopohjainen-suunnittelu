#include "devicemouse.h"
#include <iostream>
using namespace std;

short DeviceMouse::getPrimaryButton() const
{
    return primaryButton;
}

void DeviceMouse::setPrimaryButton(short newPrimaryButton)
{
    primaryButton = newPrimaryButton;
}

DeviceMouse::DeviceMouse()
{

}
