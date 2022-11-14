#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = -1;
    if (N > 0)
    {
        Zombie *zombie = new Zombie[N];
        if(!zombie)
            return(NULL);
        while(++i < N)
            zombie[i].set_name(name);
        return zombie;
    }
    return(NULL);
}