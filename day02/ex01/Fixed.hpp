#pragma once

#include <iostream>
#include <cmath>

class Fixed{
    private:
        float value;
        static const int bits_value = 8;
    public:
        Fixed();
        Fixed(Fixed const& F);
        Fixed(const int conv_value);
        Fixed(const float conv_value);
        Fixed & operator=(Fixed const& F);
        ~Fixed();
        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits(void) const;
        void setRawBits( int const raw );
};
std::ostream & operator<<(std::ostream &ob ,Fixed const& F);