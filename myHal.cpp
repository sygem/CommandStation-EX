#include "IODevice.h"

void halSetup() {
  // Insert your commands here...
  PCA9685::create(132, 16, 0x42);
}