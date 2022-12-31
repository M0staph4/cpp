/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 21:24:54 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/31 21:24:55 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
    ShrubberyCreationForm a("one");
    RobotomyRequestForm b("two");
    PresidentialPardonForm c("three");
    // try
    // {
    //     Intern someRandomIntern;
    //     Form* rrf;
    //     rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    //     Bureaucrat a("mucha", 137);
    //     rrf->beSigned(a);
    //     a.signForm(*rrf);
    //     a.executeForm(*rrf);
    //     delete rrf;
    // }
    // catch(std::exception &e)
    // {
    //     std::cerr<< e.what() <<std::endl;
    // }
    std::cout <<a<<std::endl;
    std::cout <<b<<std::endl;
    std::cout <<c<<std::endl;
}