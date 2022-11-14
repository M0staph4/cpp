#include "Zombie.hpp"

int main()
{
    int i = -1;
    Zombie *zombie;
    zombie = zombieHorde(5, "boo");
    while(++i < 5)
        zombie[i].anounce();
    delete[] zombie;
}
