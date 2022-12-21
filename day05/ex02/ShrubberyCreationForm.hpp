#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form{
	private:
	    std::string target;
	public:
	  ShrubberyCreationForm();
	  ShrubberyCreationForm(const ShrubberyCreationForm &CP);
	  ShrubberyCreationForm& operator=(const ShrubberyCreationForm &OB);
	  ~ShrubberyCreationForm();
	  void execute(Bureaucrat const & executor);
};


#endif