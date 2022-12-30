/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 22:09:44 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/29 23:07:46 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat {
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &CP);
        Bureaucrat& operator=(const Bureaucrat& OB);
        ~Bureaucrat();
        int getGrade() const;
        std::string getName() const;
        void incrementGrade(int grade);
        void decrementGrade(int grade);
        void signForm(Form &form) const;
        void executeForm(Form const & form) const;

        class GradeTooHighException : public std::exception{
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream &OS, const Bureaucrat& OB);

#endif