#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout<< name << " "<< weapon.getType ()<<std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon), name(name)
{

}