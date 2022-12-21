#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotRequestForm : public Form{
    private:
            std::string target;
    public:
        RobotRequestForm();
        RobotRequestForm(const RobotRequestForm &CP);
        RobotRequestForm &operator=(const RobotRequestForm &CP);
        ~RobotRequestForm();
        void execute(Bureaucrat const & executor);
};
#endif