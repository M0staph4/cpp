#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
class ShrubberyCreationForm : public Form {
	private:
	    std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &CP);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &OB);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const;
		std::string getTarget() const;
};
std::ostream& operator<<(std::ostream &OS, ShrubberyCreationForm &OB);

#endif