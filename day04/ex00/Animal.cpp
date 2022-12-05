/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:29:36 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/04 19:06:01 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called"<< std::endl;
}

Animal::Animal(std::string &type)
{
    std::cout << "Animal Parameterized constructor called"<< std::endl;
    this->type = type;
}

Animal::Animal(const Animal &CP)
{
    std::cout << "Animal Copy Constructor is called" <<std::endl;
    *this = CP;
}

Animal& Animal::operator=(const Animal &OB)
{
    std::cout << "Animal Assignment Operator is called"<< std::endl;
    this->type = OB.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" <<std::endl;
}

std::string Animal::getType() const
{
    return  type;
}

void Animal::makeSound() const
{
    std::cout << "i'm animal" << std::endl;
}