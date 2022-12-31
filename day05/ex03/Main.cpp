#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
    try
    {
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        Bureaucrat a("mucha", 137);
        rrf->beSigned(a);
        a.signForm(*rrf);
        a.executeForm(*rrf);
        delete rrf;
    }
    catch(std::exception &e)
    {
        std::cerr<< e.what() <<std::endl;
    }
}