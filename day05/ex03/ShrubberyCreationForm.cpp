#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
Form("Shrubbery", 145, 137)
{
    std::cout<<"ShrubberyCreationForm default constructor called"<<std::endl;
    this->target = "luchaa";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
:Form("Shrubbery", 145, 137)
{
    std::cout<<"ShrubberyCreationForm Parameterized constructor called"<<std::endl;
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &CP)
:Form("Shrubbery", 145, 137)
{
    std::cout <<"ShrubberyCreationForm copy constructor called"<<std::endl;
    *this = CP;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &OB)
{
    std::cout <<"ShrubberyCreationForm assignment operator called"<<std::endl;
    this->target = OB.target;
    return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout<<"ShrubberyCreationForm destructor called"<<std::endl; 
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::fstream file;
    if(this->isSigned() && this->getExecuteGrade() >= executor.getGrade())
    {
        file.open(target + "_shrubbery", std::ios::out);
        file << "           \\/ |    |/\n";
        file << "        \\/ / \\||/  /_/___/_\n";
        file << "         \\/   |/ \\/\n";
        file << "    _\\__\\_\\   |  /_____/_\n";
        file << "  __ _-----`  |{,-----------~\n";
        file << "             }{{\n";
        file << "             }}{\n";
        file << "             }{{\n";
        file << "       , -=-~{ .-^- _\n";
        file << "             `}" << std::endl;
        file.close();
    }
    else
        GradeTooLowException();
}

std::string ShrubberyCreationForm::getTarget() const {return target;}

std::ostream &operator<<(std::ostream &OS, ShrubberyCreationForm &OB)
{
    OS <<"Shrubbery sign grade : " << OB.getSignGrade() << "Shrubbery execute grade : " << OB.getExecuteGrade() << "Shrubbery target" << OB.getTarget();
    return OS;
}
