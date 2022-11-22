#include "Fixed.hpp"

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
    this->value = F.getRawBits();
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
