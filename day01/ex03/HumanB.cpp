/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:51:57 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/11/16 18:35:21 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout<< name << " " <<weapon->getType()<<std::endl;
}

HumanB::HumanB(std::string name, Weapon *weapon) 
       :weapon(weapon), name(name){}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}
