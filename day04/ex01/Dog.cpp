/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:07:08 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/05 20:51:53 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    brain = new Brain;
    type = "Dog";
    std::cout << "Dog constructor called"<< std::endl;
}

Dog::Dog(std::string &type)
{
    brain = new Brain;
    std::cout << "Dog Parameterized constructor called"<< std::endl;
    this->type = type;
}

Dog::Dog(const Dog &CP)
{
    brain = new Brain;
    std::cout << "Dog Copy Constructor is called" <<std::endl;
    *this = CP;
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
    delete brain;
    std::cout << "Dog destructor called" <<std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof"<< std::endl;
}