#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
        void guardGate();
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const& St);
        ScavTrap& operator=(ScavTrap const& St);
        ~ScavTrap();
        void attack(const std::string &target);
};
#endif