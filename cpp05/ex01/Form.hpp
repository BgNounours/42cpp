#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const name;
        int const grade_toSign;
        int const grade_toExec;
        bool BeenSigned;
    public:
        Form();
        Form(std::string const _name, int const ts, int const te);
        Form(Form const &origin);
        ~Form();

        const std::string& getName() const;
        int getGrade_toSign() const;
        int getGrade_toExec() const;
        bool getSigned() const;
        void beSigned(const Bureaucrat &signing);

        class GradeTooHighException: public std::exception
        {
            virtual const char*	what() const throw(); 
        };
        class GradeTooLowException: public std::exception
        {
            virtual const char*	what() const throw(); 
        };

        Form &operator=(Form const &src);
};

std::ostream& operator<<(std::ostream& os, const Form& toPrint);

#endif