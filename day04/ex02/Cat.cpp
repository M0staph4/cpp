/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:42:13 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/05 20:48:36 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called"<< std::endl;
    type = "Cat";
    brain = new Brain;
}

Cat::Cat(std::string &type)
{
    std::cout << "Cat Parameterized constructor called"<< std::endl;
    this->type = type;
    brain = new Brain;
}

Cat::Cat(const Cat& CP)
{
    
    std::cout << "Cat Copy Constructor is called" <<std::endl;
    brain = new Brain;
    *this = CP;
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
