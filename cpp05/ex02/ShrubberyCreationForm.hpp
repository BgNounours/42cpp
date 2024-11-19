#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;
class AForm;

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
        std::string const name;
        int const grade_toSign;
        int const grade_toExec;
        bool BeenSigned;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const _target);
        ShrubberyCreationForm(ShrubberyCreationForm const &origin);
        ~ShrubberyCreationForm();

        std::string const getTarget() const;
        void executing() const;
};

#endif