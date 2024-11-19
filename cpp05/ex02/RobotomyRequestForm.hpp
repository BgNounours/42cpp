#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include <cstdlib>

class Bureaucrat;
class AForm;

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
        std::string const name;
        int const grade_toSign;
        int const grade_toExec;
        bool BeenSigned;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const _target);
        RobotomyRequestForm(RobotomyRequestForm const &origin);
        ~RobotomyRequestForm();

        std::string const getTarget() const;
        void executing() const;
};

#endif