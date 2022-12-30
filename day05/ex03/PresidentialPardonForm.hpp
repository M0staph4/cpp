#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string& target);
        PresidentialPardonForm(const PresidentialPardonForm &CP);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &OB);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;
        std::string getTaget() const;
};

#endif