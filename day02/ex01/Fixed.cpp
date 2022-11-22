#include "Fixed.hpp"

Fixed::Fixed(const int conv_value)
{
    std::cout <<"Int constructor called"<< std::endl;
    value = conv_value << bits_value;
}

Fixed::Fixed(const float conv_value)
{
    std::cout <<"Float constructor called"<< std::endl;
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
    std::cout <<"Default constructor called"<< std::endl;
    value = 0;
}

Fixed::Fixed(Fixed const& F)
{
    std::cout <<"Copy constructor called"<< std::endl;
    (*this) = F;
}

Fixed & Fixed::operator=(Fixed const& F)
{
    std::cout <<"Copy assignment operator called"<< std::endl;
    this->value = F.value;
    return *this;
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout<<"getRawBits member function called"<<std::endl;
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}
std::ostream & operator<<(std::ostream &ob ,Fixed const& F)
{
    ob << F.toFloat();
    return ob;
}
