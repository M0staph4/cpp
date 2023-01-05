/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 22:44:32 by mmoutawa          #+#    #+#             */
/*   Updated: 2023/01/05 23:37:57 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>


class Base {
    public:
        virtual ~Base(){};
        Base * generate(void);
        void identify(Base* p);
        void identify(Base& p);
};
#endif