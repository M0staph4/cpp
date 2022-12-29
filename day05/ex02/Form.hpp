#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;
class Form {
    private:
        const std::string name;
        bool _signed;
        const int sign_grade;
        const int execute_grade;
    public:
        Form();
        Form(const std::string name, const int sign_grade, const int execute_grade);
        Form(const Form &CP);
        Form &operator=(const Form &OB);
        std::string getName() const;
        bool isSigned() const;
        int getSignGrade() const;
        int getExecuteGrade() const;
        void beSigned(Bureaucrat BR);

        virtual ~Form();
        virtual void execute(Bureaucrat const & executor) const = 0;

        class GradeTooHighException : public std::exception{
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                const char* what() const throw();
        };
};
std::ostream& operator<<(std::ostream &OS, const Form& OB);

#endif