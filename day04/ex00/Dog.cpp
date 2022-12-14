/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:07:08 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/13 14:48:26 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called"<< std::endl;
    type = "Dog";
}

Dog::Dog(std::string &type)
{
    std::cout << "Dog Parameterized constructor called"<< std::endl;
    this->type = type;
}

Dog::Dog(const Dog &CP)
{
    std::cout << "Dog Copy Constructor is called" <<std::endl;
    *this = CP;
}

Dog& Dog::operator=(const Dog &OB)
{
    std::cout << "Dog Assignment Operator is called"<< std::endl;
    this->type = OB.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" <<std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}