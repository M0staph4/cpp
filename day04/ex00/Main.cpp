#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();

        delete meta;
        delete j;
        delete i;
    }

    // {
    //     WrongAnimal *Wa = new WrongCat;
    //     WrongAnimal *Wa2 = new WrongAnimal;

    //     std::cout << Wa->getType() << " " << std::endl;
    //     std::cout << Wa2->getType() << " " << std::endl;
        
    //     Wa->makeSound();
    //     Wa2->makeSound();
        
    //     delete Wa;
    //     delete Wa2;
    // }
    
    return 0;
}
