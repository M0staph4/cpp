#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
    try
    {
        Bureaucrat a("mucha", 5);
        PresidentialPardonForm d("home");
        a.signForm(d);
        a.executeForm(d);
    }
    catch(std::exception &e)
    {
        std::cerr<< e.what() <<std::endl;
    }
}