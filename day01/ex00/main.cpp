#include "Zombie.hpp"

int main()
{
    Zombie *zombie;
    zombie = newZombie("boo");
    randomChump("foo");
    zombie->anounce();
    delete zombie;
}
