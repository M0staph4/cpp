#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
:Form("President", 25, 5)
{
    std::cout <<"PresidentialPardonForm default constructor called"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
:Form("President", 25, 5)
{
    std::cout <<"PresidentialPardonForm parameterzed constructor called"<<std::endl;
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& CP)
:Form("President", 25, 5)
{
    std::cout <<"PresidentialPardonForm copy constructor called"<<std::endl;
    *this = CP;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& OB)
{
    std::cout <<"PresidentialPardonForm assignment operator called"<<std::endl;
    this->target = OB.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout <<"PresidentialPardonForm destructor called"<<std::endl;
}

std::string PresidentialPardonForm::getTaget() const
{
    return target;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if(this->isSigned() && this->getExecuteGrade() >= executor.getGrade())
        std::cout<<getTaget()<<" has been pardoned by Zaphod Beeblebrox."<<std::endl;
    else
        GradeTooLowException();

}