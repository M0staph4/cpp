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

Form *Intern::makeForm(std::string name ,std::string target)
{
    PresidentialPardonForm *P;
    RobotomyRequestForm *R;
    ShrubberyCreationForm *S;

    std::string names[3]; 
    names[0] = "presidential pardon";
    names[1] = "robotomy request";
    names[2] = "shrubbery creation";

    
    switch(name)
    {
        case names[0]:
            return P;
        case names[1]:
            return R;
        case names[2]:
            return S;
        default:
            break;
    }
    return NULL;
}