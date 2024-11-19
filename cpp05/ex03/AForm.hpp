#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string const name;
        int const grade_toSign;
        int const grade_toExec;
        bool BeenSigned;
    public:
        AForm();
        AForm(std::string const _name, int const ts, int const te);
        AForm(AForm const &origin);
        virtual ~AForm();

        const std::string& getName() const;
        int getGrade_toSign() const;
        int getGrade_toExec() const;
        bool getSigned() const;
        void beSigned(const Bureaucrat &signing);
        void execute(Bureaucrat const &executor);
        virtual void executing() const = 0;

        class GradeTooHighException: public std::exception
        {
            virtual const char*	what() const throw(); 
        };
        class GradeTooLowException: public std::exception
        {
            virtual const char*	what() const throw(); 
        };
        class FormUnsignedException: public std::exception
        {
            virtual const char*	what() const throw(); 
        };

        AForm &operator=(AForm const &src);
};

std::ostream& operator<<(std::ostream& os, const AForm& toPrint);

#endif