/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:15:59 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/11/28 21:10:16 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

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
        ~Fixed();

        static Fixed& min(Fixed &F, Fixed &F2);
        static Fixed const & min(Fixed const &F, Fixed const &F2);
        static Fixed& max(Fixed &F, Fixed &F2);
        static Fixed const & max(Fixed const &F, Fixed const &F2);

        bool operator>(Fixed const& F);
        bool operator<(Fixed const& F);
        bool operator>=(Fixed const& F);
        bool operator<=(Fixed const& F);
        bool operator==(Fixed const& F);
        bool operator!=(Fixed const& F);
        Fixed & operator=(Fixed const& F);
        Fixed operator+(Fixed const& F) const;
        Fixed operator-(Fixed const& F) const;
        Fixed operator*(Fixed const& F) const;
        Fixed operator/(Fixed const& F) const;
        Fixed & operator--(void);
        Fixed & operator++(void);
        Fixed operator--(int);
        Fixed operator++(int);

        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits(void) const;
        void setRawBits( int const raw );
};
std::ostream & operator<<(std::ostream &ob ,Fixed const& F);

#endif