
#include "serial.h"

#include <fcntl.h>
#include <iostream>
#include <unistd.h>

Serial::Serial() {}

Serial::~Serial() {}

bool Serial::Open(std::string dev, uint32_t baud) {
    _fd = open(dev.c_str(), O_RDWR | O_NOCTTY | O_NDELAY);
    if (_fd == -1)
        return false;
}