/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:39:28 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/04 19:44:20 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat constructor called"<< std::endl;
}

WrongCat::WrongCat(std::string &type)
{
    std::cout << "WrongCat Parameterized constructor called"<< std::endl;
    this->type = type;
}

WrongCat::WrongCat(const WrongCat& CP)
{
    std::cout << "WrongCat Copy Constructor is called" <<std::endl;
    *this = CP;
}

WrongCat & WrongCat::operator=(const WrongCat &OB)
{
    std::cout << "WrongCat Assignment Operator is called"<< std::endl;
    this->type = OB.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" <<std::endl;
}

void WrongCat::makeSound() const
{
    std::cout<<"Meow Meow(Wrong Cat)"<<std::endl;
}