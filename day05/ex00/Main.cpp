#include "Bureaucrat.hpp"

int main ()
{
    Bureaucrat a;

    try
    {
        Bureaucrat bureaucrat("name", 0);
    }
    catch(std::exception &e)
    {
        std::cerr<< e.what() <<std::endl;
    }
    std::cout << a <<std::endl;

}