#include "mydeviceui.h"
#include <iostream>
using namespace std;

MyDeviceUI::MyDeviceUI()
{
    objectDeviceMouse = new DeviceMouse;
    objectDeviceTouchPad = new DeviceTouchPad;
    objectDeviceDisplay = new DeviceDisplay;
}

MyDeviceUI::~MyDeviceUI()
{
    delete objectDeviceMouse;
    objectDeviceMouse = nullptr;

    delete objectDeviceTouchPad;
    objectDeviceTouchPad = nullptr;

    delete objectDeviceDisplay;
    objectDeviceDisplay = nullptr;
}

void MyDeviceUI::uiShowMenu()
{
    short user_choice;
    while(user_choice != 5){

    cout<<endl;
    cout<< "DEVICE MENU\n============"<< endl;
    cout<< "1: Set Mouse Information"<< endl;
    cout<< "2: Set Touch Pad Information"<< endl;
    cout<< "3: Set Display Information"<< endl;
    cout<< "4: Show Devices Information"<< endl;
    cout<< "5: Finish"<< endl;
    cout<<endl;
    cout<< "Choose: ";
    cin>> user_choice;

    if(user_choice == 1){
        uiSetMouseInformation();
    }
    if(user_choice == 2){
        uiSetTouchPadInformation();
    }
    if(user_choice == 3){
        uiSetDisplayInformation();
    }
    if(user_choice == 4){
        uiShowDeviceInformation();
    }
    if(user_choice == 5){
        break;
    }
   }
}

void MyDeviceUI::uiSetMouseInformation()
{
    short inserted_id, inserted_button;
    cout<<"SET MOUSE INFORMATION"<< endl;
    cout<<"====================="<< endl;
    cout<<"Set Mouse Device ID: ";
    cin>>inserted_id;
    objectDeviceMouse->setDeviceID(inserted_id);

    while(true){
        cout<<"Set Mouse Primary Button (1 = left, 2 = right): ";
        cin>>inserted_button;
        if(inserted_button == 1 || inserted_button == 2){
            break;
     }
        cout<<"Wrong input.. try again"<<endl;
    }
    objectDeviceMouse->setPrimaryButton(inserted_button);

}

void MyDeviceUI::uiSetTouchPadInformation()
{
    short inserted_id, inserted_Sensitivity;

    cout<<"SET TOUCH PAD INFORMATION"<< endl;
    cout<<"====================="<< endl;

    cout<<"Set Touch Pad Device ID: ";
    cin>>inserted_id;
    objectDeviceTouchPad->setDeviceID(inserted_id);

    while(true){
        cout<<"Set Touch Pad Sensitivity (1-5): ";
        cin>>inserted_Sensitivity;
        if(inserted_Sensitivity > 0 && inserted_Sensitivity < 6){
            break;
        }
        cout<<"Wrong input.. try again"<<endl;
    }
    objectDeviceTouchPad->setTouchPadSensitivity(inserted_Sensitivity);
}

void MyDeviceUI::uiSetDisplayInformation()
{
    short inserted_id, inserted_Resolution;

    cout<<"SET DISPLAY INFORMATION"<< endl;
    cout<<"====================="<< endl;

    cout<<"Set Display Device ID: ";
    cin>>inserted_id;
    objectDeviceDisplay->setDeviceID(inserted_id);

    while(true){
        cout<<"Set Display Resolution (1-10): ";
        cin>>inserted_Resolution;

        if(inserted_Resolution > 0 && inserted_Resolution < 11){
            break;
        }
        cout<<"Wrong input.. try again"<<endl;
    }
    objectDeviceDisplay->setDisplayResolution(inserted_Resolution);
}
void MyDeviceUI::uiShowDeviceInformation()
{
    short button = objectDeviceMouse->getPrimaryButton();
    if(button == 1 || button == 2){
        cout<<"Device name is Mouse"<< endl;
        cout<<"Device ID is: "<<objectDeviceMouse->getDeviceID()<< endl;
        if(button == 1){
            cout<<"Mouse Primary Button is left"<< endl;
        }
        else if(button == 2){
            cout<<"Mouse Primary Button is right"<< endl;
        }
    }
    cout<<endl;

    short padSensitivity = objectDeviceTouchPad->getTouchPadSensitivity();
    if(padSensitivity < 6 && padSensitivity > 0){
        cout<<"Device name is Touch Pad"<< endl;
        cout<<"Device ID is: "<<objectDeviceTouchPad->getDeviceID()<< endl;
        if(padSensitivity == 5){
            cout<<"Touch Pad Sensitivity is very low"<< endl;
        }
        if(padSensitivity == 4){
            cout<<"Touch Pad Sensitivity is low"<< endl;
        }
        if(padSensitivity == 3){
            cout<<"Touch Pad Sensitivity is moderate"<< endl;
        }
        if(padSensitivity == 2){
            cout<<"Touch Pad Sensitivity is high"<< endl;
        }
        if(padSensitivity == 1){
            cout<<"Touch Pad Sensitivity is very high"<< endl;
        }
    }
    cout<<endl;

    short resolution = objectDeviceDisplay->getDisplayResolution();
    if(resolution > 0 && resolution < 11){
        cout<<"Device name is Display"<< endl;
        cout<<"Device ID is: "<<objectDeviceDisplay->getDeviceID()<< endl;

        if(resolution > 6){
            cout<<"Display Resolution is high"<< endl;
        }
        if(resolution > 3 && resolution < 7){
            cout<<"Display Resolution is moderate"<< endl;
        }
        if(resolution > 0 && resolution < 4){
            cout<<"Display Resolution is low"<< endl;
        }
    }
    cout<<endl;

}
