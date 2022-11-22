/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:51:57 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/11/18 15:52:00 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    if(weapon)
        std::cout<< name << " " <<weapon->getType()<<std::endl;
}

HumanB::HumanB(std::string name) 
       :name(name){}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}
