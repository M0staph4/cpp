#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout <<"ScavTrap constructor called"<< std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout <<"ScavTrap destructor called"<< std::endl;
}

ScavTrap::ScavTrap(std::string name) 
{
    std::cout <<"ScavTrap Parameterized Constructor called"<< std::endl;
    this->name = name;
}

ScavTrap::ScavTrap(ScavTrap const& St)
{
    *this = St;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& St)
{
    this->name = St.name;
    this->Hit_Points = St.Hit_Points;
    this->Energy_Points = St.Energy_Points;
    this->Attack_Damage = St.Attack_Damage;
    return *this; 
}

void ScavTrap::guardGate()
{
    std::cout<<"ScavTrap is now in Gate keeper mode"<<std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if(!Energy_Points || !Hit_Points)
    std::cout<<"there's no hit points"<<std::endl;
    else
    {
        std::cout<<"ScavTrap "<<name<<" attacks "<<target<<", causing "<< Attack_Damage <<" points of damage!"<<std::endl;
        Energy_Points -= 1;
    }
}