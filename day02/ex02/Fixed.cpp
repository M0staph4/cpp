/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:15:57 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/11/28 21:10:13 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed(){}

Fixed::Fixed()  {value = 0;}

Fixed::Fixed(const int conv_value)
{
    value = conv_value << bits_value;
}

Fixed::Fixed(const float conv_value)
{
    value = roundf(conv_value * (1 << bits_value));
}

float Fixed::toFloat( void ) const
{
    return (value / (1 << bits_value));
}

int Fixed::toInt( void ) const
{
    return (value / (1 << bits_value));
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

int Fixed::getRawBits(void) const
{
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

Fixed Fixed::operator+(Fixed const& F) const
{
    Fixed tmp;

    tmp.value = this->value + F.value;
    return tmp;
}

Fixed Fixed::operator-(Fixed const& F) const
{
    Fixed tmp;

    tmp.value = this->value - F.value;
    return tmp;
}

Fixed Fixed::operator*(Fixed const& F) const
{
    Fixed tmp;

    tmp.value = (this->value * F.value) / (1 << bits_value);
    return tmp;
}

Fixed Fixed::operator/(Fixed const& F) const
{
    Fixed tmp;

    tmp.value = this->value / (F.value / (1 << bits_value));
    return tmp;
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
