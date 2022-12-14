/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:40:37 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/13 14:48:05 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called"<< std::endl;
}

WrongAnimal::WrongAnimal(std::string &type)
{
    std::cout << "WrongAnimal Parameterized constructor called"<< std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &CP)
{
    std::cout << "WrongAnimal Copy Constructor is called" <<std::endl;
    *this = CP;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &OB)
{
    std::cout << "WrongAnimal Assignment Operator is called"<< std::endl;
    this->type = OB.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" <<std::endl;
}

std::string WrongAnimal::getType() const
{
    return  type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "i'm Wrong animal" << std::endl;
}