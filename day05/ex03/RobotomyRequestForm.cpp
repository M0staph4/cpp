#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
:Form("Robot", 72, 45)
{
    std::cout << "RobotomyRequestForm default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
:Form("Robot", 72, 45)
{
    std::cout<<"RobotomyRequestForm parameterzed constructor called" << std::endl;
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &OB)
:Form("Robot", 72, 45)
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    *this = OB;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &OB)
{
    std::cout << "RobotomyRequestForm assignment operator called" << std::endl;
    this->target = OB.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout<<"RobotomyRequestForm destructor called" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
    return this->target;
}

void::RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(this->isSigned() && this->getExecuteGrade() >= executor.getGrade())
    {
        if(time(NULL) % 2 == 0)
            std::cout<<this->getTarget()<<" has been robotomized"<<std::endl;
        else
            std::cout<<"the robotomy failed"<<std::endl;
    }
    else
        GradeTooLowException();

}

std::ostream &operator<<(std::ostream &OS, RobotomyRequestForm &OB)
{
    OS <<"Robotomy sign grade : " << OB.getSignGrade() << "Robotomy execute grade : " << OB.getExecuteGrade() << "Robotomy target" << OB.getTarget();
    return OS;
}