#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &CP);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &OB);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor);
};

#endif