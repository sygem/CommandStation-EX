#include "IODevice.h"

void halSetup() {
    PCA9685::create(100, 16, 0x40);
    PCA9685::create(116, 16, 0x41, 1000);
    PCA9685::create(132, 16, 0x42, 1000);

    PCF8575::create(164, 16, 0x20);
    PCF8575::create(180, 16, 0x21);
    PCF8575::create(196, 16, 0x22);
}