#include "Bureaucrat.hpp"
#include "Form.hpp"
int main ()
{
    try
    { 
        Bureaucrat a("mucha", 4);
        Form d("lucha", 131, 5);
        d.beSigned(a);
        a.signForm(d);
    }
    catch(std::exception &e)
    {
        std::cerr<< e.what() <<std::endl;
    }

    // std::cout << d << std::endl;
    // std::cout << a <<std::endl;

}