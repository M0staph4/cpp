#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        void highFivesGuys(void);
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const& St);
        FragTrap& operator=(FragTrap const& St);
        ~FragTrap();
};
#endif