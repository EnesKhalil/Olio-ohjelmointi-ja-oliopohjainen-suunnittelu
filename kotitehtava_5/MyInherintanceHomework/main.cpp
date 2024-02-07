#include <iostream>
#include "devicebaseclass.h"
#include "devicedisplay.h"
#include "devicemouse.h"
#include "mydeviceui.h"
#include "devicetouchpad.h"

using namespace std;

int main()
{
    MyDeviceUI olio;
    olio.uiShowMenu();
    return 0;
}
