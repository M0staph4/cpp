/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 21:24:49 by mmoutawa          #+#    #+#             */
/*   Updated: 2023/01/02 12:37:54 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout <<"Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &OB)
{
    std::cout <<"Intern copy constructor called" << std::endl;
    *this = OB;
}

Intern& Intern::operator=(const Intern &OB)
{
    (void) OB;
    std::cout <<"Intern assignment operator called" << std::endl;
    return *this;
}

Intern::~Intern()
{
    std::cout <<"Intern destructor called" << std::endl;
}

const char *Intern::ClassName::what() const throw()
{
    return "class name dosen't exist";
}

Form *Intern::makeForm(std::string name ,std::string target)
{
    Form *form;

    std::string names[3]; 
    names[0] = "presidential pardon";
    names[1] = "robotomy request";
    names[2] = "shrubbery creation";
    int i = -1;
    while(names[++i] != name && i < 3);
    switch(i)
    {
        case 0:
            form = new PresidentialPardonForm(target);
            return form;
        case 1:
            form = new RobotomyRequestForm(target);
            return form;
        case 2:
            form = new ShrubberyCreationForm(target);
            return form;
        default :
            throw ClassName();
    }
}