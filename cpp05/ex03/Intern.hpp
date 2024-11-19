#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class AForm;

class RobotomyRequestForm;

class PresidentialPardonForm;

class ShrubberyCreationForm;

class Intern
{
    public:
        Intern();
        ~Intern();
        AForm*   makeForm(const std::string _name, const std::string _target);

        class UnrecognizedFormException: public std::exception
        {
            virtual const char*	what() const throw(); 
        };
};

#endif