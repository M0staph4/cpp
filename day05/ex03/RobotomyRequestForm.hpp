/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 21:25:07 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/31 21:25:08 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"


class RobotomyRequestForm : public Form{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &CP);
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &CP);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor) const;
        std::string getTarget() const;
};
std::ostream& operator<<(std::ostream &OS, RobotomyRequestForm &OB);

#endif