#pragma once

#include <iostream>

class ClapTrap{
    private:
        std::string name;
        unsigned int Hit_Points;
        unsigned int Energy_Points;
        unsigned int Attack_Damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &cp);
        ~ClapTrap();
        ClapTrap &operator=(ClapTrap const &cp);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount); 
};