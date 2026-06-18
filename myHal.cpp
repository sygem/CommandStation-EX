#include "IODevice.h"
#include "IO_PCF8575.h"
#include "IO_HALDisplay.h"

void halSetup() {
    // Servo Controller for turnouts
    PCA9685::create(1000, 16, 0x40);
    // Light Controllers
    PCA9685::create(1016, 16, 0x41, 1000);
    PCA9685::create(1032, 16, 0x42, 1000);
    // One more is available for future use.  Allocates pins 1048-1063.
    PCA9685::create(1048, 16, 0x43);

    // 3 PCF8575s for the control panel buttons and LEDs.  Allocates 48 pins 1064-1111.
    PCF8575::create(1064, 16, 0x20);
    PCF8575::create(1080, 16, 0x21);
    PCF8575::create(1096, 16, 0x22);

    // spare expander for future use.  Allocates pins 1112-1127.  Can be used for more buttons, LEDs, or other I/O.
    PCF8575::create(1112, 16, 0x23);

    // Additional display
    HALDisplay<OLED>::create(1, 0x3C, 128, 64);

}