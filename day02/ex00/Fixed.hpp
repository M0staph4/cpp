/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:31:00 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/11/28 12:33:53 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        float value;
        static const int bits_value = 8;
    public:
        Fixed();
        Fixed(Fixed const& F);
        ~Fixed();
        Fixed & operator=(Fixed const& F);
        int getRawBits(void) const;
        void setRawBits( int const raw );
};
#endif
