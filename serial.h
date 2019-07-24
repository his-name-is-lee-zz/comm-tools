
#pragma once

#include <stdint.h>
#include <string>
#include <termio.h>
#include <vector>

class Serial {

    public:

        Serial();
        ~Serial();

        ////////////
        // variables
        ////////////

        enum ByteSize {
            FIVE = 5, SIX, SEVEN, EIGHT
        };

        enum Parity {
            NONE = 0, ODD, EVEN
        };

        enum StopBits {
            ONE = 1, TWO
        };

        ////////////
        // functions
        ////////////

        bool Open(std::string, uint32_t);

    private:

        ////////////
        // variables
        ////////////

        int _fd;
        termios _options;

        ////////////
        // functions
        ////////////

};