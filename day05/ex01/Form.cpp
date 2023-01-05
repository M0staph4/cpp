#include "Form.hpp"

Form::Form():name("muchalucha"), sign_grade(0), execute_grade(0)
{
    std::cout <<"Form default constructor called" << std::endl;
}

Form::Form(const std::string name, const int sign_grade, const int execute_grade)
        :name(name), sign_grade(sign_grade), execute_grade(execute_grade)
{
    std::cout <<"Form Parameterized constructor called" << std::endl;
}

Form::Form(const Form &CP):name("muchalucha"), sign_grade(0), execute_grade(0)
{
    std::cout <<"Form copy constructor called" << std::endl;
    *this = CP;
}

Form& Form::operator=(const Form &OB)
{
    std::cout <<"Form assignment operator called" << std::endl;
    this->_signed = OB._signed;
    return *this;
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

std::string Form::getName() const {return name;}

int Form::getSignGrade() const {return sign_grade;}

int Form::getExecuteGrade() const {return execute_grade;}

bool Form::isSigned() const {return _signed;}

Form::~Form()
{
    std::cout <<"Form destructor called" << std::endl;
}

void Form::beSigned(Bureaucrat &BR)
{
    if(BR.getGrade() < this->getSignGrade())
        throw GradeTooLowException();
    else
        _signed = true;
}


std::ostream& operator<<(std::ostream &OS, const Form& OB)
{
    OS << OB.getName() << " Form sign grade : " << OB.getSignGrade() << " Form execute grade : " << OB.getExecuteGrade() << "Form sign : " << OB.isSigned();
    return OS;
}