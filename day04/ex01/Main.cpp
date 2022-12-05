#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    int i = 0;
    Animal *animal[6];
    while(i < 6)
    {
        if(i < 3)
            animal[i] = new Cat;
        else
            animal[i] = new Dog;
        i++;
    }
    i = -1;
    while(++i < 6)
        animal[i]->makeSound();
    while(--i >= 0)
        delete animal[i];
    
    return 0;
}
