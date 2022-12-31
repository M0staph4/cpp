#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
    public:
        Intern();
        Intern(const Intern& OB);
        Intern& operator=(const Intern& OB);
        ~Intern();
        Form *makeForm(std::string name, std::string target);
        class ClassName : public std::exception{
            public:
                const char* what() const throw();
        };
};  

#endif