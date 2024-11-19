#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm;

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
        std::string const name;
        int const grade_toSign;
        int const grade_toExec;
        bool BeenSigned;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const _target);
        PresidentialPardonForm(PresidentialPardonForm const &origin);
        ~PresidentialPardonForm();

        std::string const getTarget() const;
        void executing() const;
};

#endif