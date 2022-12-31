/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 21:25:02 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/31 21:25:03 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        std::string getTarget() const;
};
std::ostream& operator<<(std::ostream &OS, PresidentialPardonForm &OB);

#endif