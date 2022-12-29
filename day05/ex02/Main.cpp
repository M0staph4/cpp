#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{       
    Bureaucrat a;
    ShrubberyCreationForm d;
    try
    {
        Bureaucrat a("mucha", 200);
        ShrubberyCreationForm d("home");
        d.beSigned(a);
        a.signForm(d);
        a.executeForm(d);
    }
    catch(std::exception &e)
    {
        std::cerr<< e.what() <<std::endl;
    }

    std::cout << d << std::endl;
    std::cout << a <<std::endl;

}