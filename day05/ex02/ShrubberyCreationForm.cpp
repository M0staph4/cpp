#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout<<"ShrubberyCreationForm default constructor called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &CP)
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

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    std::fstream file;

    if(this->getSignGrade() == 145 && this->getExecuteGrade() == 137)
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
    }

}
