#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    Hit_Points = 100;
    Energy_Points = 100;
    Attack_Damage = 30;
    std::cout <<"FragTrap constructor called"<< std::endl;
}

FragTrap::~FragTrap()
{
    std::cout <<"FragTrap destructor called"<< std::endl;
}

FragTrap::FragTrap(std::string name) 
{
    Hit_Points = 100;
    Energy_Points = 100;
    Attack_Damage = 30;
    std::cout <<"FragTrap Parameterized Constructor called"<< std::endl;
    this->name = name;
}

FragTrap::FragTrap(FragTrap const& St)
{
    std::cout<<"Fragtrap Copy Constructor is called"<<std::endl;
    *this = St;
}

FragTrap& FragTrap::operator=(FragTrap const& St)
{
    this->name = St.name;
    this->Hit_Points = St.Hit_Points;
    this->Energy_Points = St.Energy_Points;
    this->Attack_Damage = St.Attack_Damage;
    std::cout<<"FragTrap Assignment Operator is called"<<std::endl;
    return *this; 
}

void FragTrap::highFivesGuys()
{
    std::cout<<"a positive high fives request "<<std::endl;
}
