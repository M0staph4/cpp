#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout <<"FragTrap constructor called"<< std::endl;
}

FragTrap::~FragTrap()
{
    std::cout <<"FragTrap destructor called"<< std::endl;
}

FragTrap::FragTrap(std::string name) 
{
    std::cout <<"FragTrap Parameterized Constructor called"<< std::endl;
    this->name = name;
}

FragTrap::FragTrap(FragTrap const& St)
{
    *this = St;
}

FragTrap& FragTrap::operator=(FragTrap const& St)
{
    this->name = St.name;
    this->Hit_Points = St.Hit_Points;
    this->Energy_Points = St.Energy_Points;
    this->Attack_Damage = St.Attack_Damage;
    return *this; 
}

void FragTrap::highFivesGuys()
{
    std::cout<<"FragTrap is now in Gate keeper mode"<<std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if(!Energy_Points || !Hit_Points)
    std::cout<<"there's no hit points"<<std::endl;
    else
    {
        std::cout<<"FragTrap "<<name<<" attacks "<<target<<", causing "<< Attack_Damage <<" points of damage!"<<std::endl;
        Energy_Points -= 1;
    }
}