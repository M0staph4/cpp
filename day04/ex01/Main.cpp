#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    int i = -1;
    Animal *animal[6];
    
    while(++i < 6)
    {
        if(i < 3)
            animal[i] = new Cat;
        else
            animal[i] = new Dog;
    }

    i = -1;

    while(++i < 6)
        animal[i]->makeSound();

    // i = -1;
    // Cat *cat = new Cat;
    // while(++i < 100)
    //     std::cout << cat->getBrain(i)<< std::endl;

    i = -1;

    while(++i >= 0)
        delete animal[i];
    
    return 0;
}