#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{       
    Bureaucrat a("mucha", 1);
    ShrubberyCreationForm d("home");
    try
    { 
        a.signForm(d);
        d.execute(a);
    }
    catch(std::exception &e)
    {
        std::cerr<< e.what() <<std::endl;
    }

    std::cout << d << std::endl;
    std::cout << a <<std::endl;

}