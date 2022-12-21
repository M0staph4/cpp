#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout <<"PresidentialPardonForm default constructor called"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& CP)
{
    std::cout <<"PresidentialPardonForm copy constructor called"<<std::endl;
    *this = CP;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& OB)
{
    std::cout <<"PresidentialPardonForm assignment operator called"<<std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout <<"PresidentialPardonForm destructor called"<<std::endl;
}