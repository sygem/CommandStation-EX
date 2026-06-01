#include "IODevice.h"

void halSetup() {
    PCA9685::create(1000, 16, 0x40);
    PCA9685::create(1016, 16, 0x41, 1000);
    PCA9685::create(1032, 16, 0x42, 1000);

    PCF8575::create(1064, 16, 0x20);
    PCF8575::create(1080, 16, 0x21);
    PCF8575::create(1096, 16, 0x22);
}