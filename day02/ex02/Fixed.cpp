#include "Fixed.hpp"

Fixed::Fixed(const int conv_value)
{
    value = conv_value << bits_value;
}

Fixed::Fixed(const float conv_value)
{
    value = roundf(conv_value * 256);
}

float Fixed::toFloat( void ) const
{
    return (value / 256);
}

int Fixed::toInt( void ) const
{
    return (value / 256);
}

Fixed::Fixed()
{
    value = 0;
}

Fixed::Fixed(Fixed const& F)
{
    (*this) = F;
}

Fixed & Fixed::operator=(Fixed const& F)
{
    this->value = F.value;
    return *this;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

Fixed & Fixed::operator+(Fixed const& F)
{
    this->value = this->value + F.value;
    return *this;
}

Fixed & Fixed::operator-(Fixed const& F)
{
    this->value = this->value - F.value;
    return *this;
}

Fixed & Fixed::operator*(Fixed const& F)
{
    this->value = (this->value * F.value) / 256;
    return *this;
}

Fixed & Fixed::operator/(Fixed const& F)
{
    this->value = (this->value / F.value) / 256;
    return *this;
}

Fixed & Fixed::operator--(void)
{
    this->value--;
    return *this;
}

Fixed & Fixed::operator++(void)
{
    this->value++;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed old = *this;
    this->value--;
    return old;
}

Fixed Fixed::operator++(int)
{
    Fixed old = *this;
    this->value++;
    return old;
}

bool Fixed::operator>(Fixed const& F)
{
    if(this->value > F.value)
        return true;
    else
        return false;
}

bool Fixed::operator<(Fixed const& F)
{
    if(this->value < F.value)
        return true;
    else
        return false;
}

bool Fixed::operator<=(Fixed const& F)
{
    if(this->value <= F.value)
        return true;
    else
        return false;
}

bool Fixed::operator>=(Fixed const& F)
{
    if(this->value >= F.value)
        return true;
    else
        return false;
}

bool Fixed::operator!=(Fixed const& F)
{
    if(this->value != F.value)
        return true;
    else
        return false;
}

bool Fixed::operator==(Fixed const& F)
{
    if(this->value == F.value)
        return true;
    else
        return false;
}

std::ostream & operator<<(std::ostream &ob ,Fixed const& F)
{
    ob << F.toFloat();
    return ob;
}

Fixed& Fixed::min(Fixed &F, Fixed &F2)
{
    if(F.value > F2.value)
        return(F2);
    else
        return(F);
}

Fixed const& Fixed::min(Fixed const &F, Fixed const &F2)
{
    if(F.value > F2.value)
        return(F2);
    else
        return(F);
}

Fixed& Fixed::max(Fixed &F, Fixed &F2)
{
    if(F.value < F2.value)
        return(F2);
    else
        return(F);
}
Fixed const & Fixed::max(Fixed const &F, Fixed const &F2)
{
    if(F.value < F2.value)
        return(F2);
    else
        return(F);
}


