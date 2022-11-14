#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
class Zombie{
    private:
        std::string name;
    public:
        void anounce(void);
        void set_name(std::string name);
        std::string get_name();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif