/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:07:08 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/14 13:21:43 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called"<< std::endl;
    type = "Dog";
    brain = new Brain;
    int i = -1;
    while(++i < 100)
        brain->SetBrain("Motchalotcha");
}

Dog::Dog(std::string &type)
{
    std::cout << "Dog Parameterized constructor called"<< std::endl;
    this->type = type;
    brain = new Brain;
    int i = -1;
    while(++i < 100)
        brain->SetBrain("Motchalotcha");
}

Dog::Dog(const Dog &CP)
{
    std::cout << "Dog Copy Constructor is called" <<std::endl;
    *this = CP;
    brain = new Brain;
    int i = -1;
    while(++i < 100)
        brain->SetBrain("Motchalotcha");
}

Dog& Dog::operator=(const Dog &OB)
{
    std::cout << "Dog Assignment Operator is called"<< std::endl;
    this->type = OB.type;
    if(brain)
        delete brain;
    brain = new Brain;
    *this->brain = *OB.brain;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" <<std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof"<< std::endl;
}

std::string Dog::getBrain(int i) const
{
    return brain->getIdeas(i);
}