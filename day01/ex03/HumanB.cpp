#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout<< name << " " <<weapon->getType()<<std::endl;
}
HumanB::HumanB(std::string name) : name(name)
{

}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}
