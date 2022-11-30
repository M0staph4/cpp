/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:15:17 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/01 00:10:46 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    Hit_Points = 100;
    Energy_Points = 100;
    Attack_Damage = 30;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"ClapTrap destructor is called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    Hit_Points = 100;
    Energy_Points = 100;
    Attack_Damage = 30;
    std::cout<<"ClapTrap Parameterized Constructor called"<<std::endl;
    this->name = name;
}

ClapTrap::ClapTrap(ClapTrap const &cp)
{
    *this = cp;
}


ClapTrap &ClapTrap::operator=(ClapTrap const &cp)
{
    this->name = cp.name;
    this->Hit_Points = cp.Hit_Points;
    this->Energy_Points = cp.Energy_Points;
    this->Attack_Damage = cp.Attack_Damage;
    return(*this);
}

void ClapTrap::attack(const std::string& target)
{
    if(!Energy_Points || !Hit_Points)
        std::cout<<"there's no hit points"<<std::endl;
    else
    {
        std::cout<<"ClapTrap "<<name<<" attacks "<<target<<", causing "<< Attack_Damage <<" points of damage!"<<std::endl;
        Energy_Points -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    
    if(Hit_Points > 0)
        Hit_Points -= amount;
    else if(Hit_Points <= 0)
        std::cout<<"there's no hit points"<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(Energy_Points <= 0 || Hit_Points <= 0)
        std::cout<<"there's no hit points"<<std::endl;
    else
    {
        Hit_Points = Hit_Points + amount;
        Energy_Points -= 1;
    }
}
int ClapTrap::get_hit_points() const
{
    return(Hit_Points);
}
