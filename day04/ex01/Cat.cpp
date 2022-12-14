/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:42:13 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/14 13:20:25 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called"<< std::endl;
    type = "Cat";
    brain = new Brain;
    int i = -1;
    while(++i < 100)
        brain->SetBrain("Motchalotcha");
}

Cat::Cat(std::string &type)
{
    std::cout << "Cat Parameterized constructor called"<< std::endl;
    this->type = type;
    brain = new Brain;
    int i = -1;
    while(++i < 100)
        brain->SetBrain("Motchalotcha");
}

Cat::Cat(const Cat& CP)
{
    std::cout << "Cat Copy Constructor is called" <<std::endl;
    brain = new Brain;
    *this = CP;
    int i = -1;
    while(++i < 100)
        brain->SetBrain("Motchalotcha");
}

Cat & Cat::operator=(const Cat &OB)
{
    std::cout << "Cat Assignment Operator is called"<< std::endl;
    this->type = OB.type;
    if(brain)
        delete brain;
    brain = new Brain;
    *this->brain = *OB.brain;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" <<std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout<<"Meow Meow"<<std::endl;
}

std::string Cat::getBrain(int i) const
{
    return brain->getIdeas(i);
}