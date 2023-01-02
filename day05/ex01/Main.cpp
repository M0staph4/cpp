#include "Bureaucrat.hpp"
#include "Form.hpp"
int main ()
{
    Form r;
    try
    { 
        Bureaucrat a("mucha", 4);
        Form d("lucha", 3, 30);
        d.beSigned(a);
        a.signForm(d);
    }
    catch(std::exception &e)
    {
        std::cerr<< e.what() <<std::endl;
    }

    std::cout << r << std::endl;
    // std::cout << a <<std::endl;

}