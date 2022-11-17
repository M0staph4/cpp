#pragma once

#include <iostream>

class Fixed{
    private:
        int value;
        static const int bits_value = 8;
    public:
        Fixed();
        Fixed(Fixed const& F);
        Fixed & operator=(Fixed const& F);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits( int const raw );
};
