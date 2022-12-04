/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:15:17 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/03 14:04:10 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    Hit_Points = 100;
    Energy_Points = 50;
    Attack_Damage = 20;
    std::cout<<"ClapTrap Constructor is called"<<std::endl
}

ClapTrap::~ClapTrap()
{
    std::cout<<"ClapTrap destructor is called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    Hit_Points = 100;
    Energy_Points = 50;
    Attack_Damage = 20;
    this->name = name;
    std::cout<<"ClapTrap Parameterized Constructor called"<<std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &cp)
{
    *this = cp;
    std::cout<<"ClapTrap Copy Constructor is called"<<std::endl;
}


ClapTrap &ClapTrap::operator=(ClapTrap const &cp)
{
    this->name = cp.name;
    this->Hit_Points = cp.Hit_Points;
    this->Energy_Points = cp.Energy_Points;
    this->Attack_Damage = cp.Attack_Damage;
    std::cout<<"ClapTrap Assignment Operator is called"<<std::endl;
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
        Hit_Points += amount;
        Energy_Points -= 1;
    }
}
