/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:51:52 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/11/16 18:22:25 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout<< name << " "<< weapon.getType ()<<std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) 
        : weapon(weapon), name(name)
        {}