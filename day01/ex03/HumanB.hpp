/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:51:59 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/11/16 18:33:33 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"
class HumanB {
    private :
        Weapon *weapon;
        std::string name;
    public :
        void attack();
        HumanB(std::string name, Weapon *weapon);
        void setWeapon(Weapon & weapon);
};

#endif