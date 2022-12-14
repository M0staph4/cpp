/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 22:09:42 by mmoutawa          #+#    #+#             */
/*   Updated: 2023/01/03 16:30:18 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("muchalucha"), grade(0)
{
    std::cout<<"Bureaucrat default constructor called"<<std::endl;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

Bureaucrat::Bureaucrat(const std::string name, int grade):name(name)
{
    if(grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
    std::cout << "Bureaucrat Parameterized constructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &CP)
{
    std::cout << "Bureaucrat copy constructor called"<<std::endl;
    *this = CP;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &OB)
{
    std::cout << "Bureaucrat assignment operator called"<<std::endl;
    this->grade = OB.grade;
    return *this;
}

int Bureaucrat::getGrade() const {return this->grade;}

std::string Bureaucrat::getName() const {return this->name;}

void Bureaucrat::incrementGrade()
{
    if (this->grade <= 1)
        throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrementGrade()
{
    if(this->grade >= 150)
        throw GradeTooLowException();
    this->grade++;
}

Bureaucrat::~Bureaucrat()
{
    std::cout<<"Bureaucrat destructor called"<<std::endl;
}

std::ostream& operator<<(std::ostream &OS, const Bureaucrat &OB)
{
    OS << OB.getName() << ", bureaucrat grade " << OB.getGrade();
    return OS;
}
