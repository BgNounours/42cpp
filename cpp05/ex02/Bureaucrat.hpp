#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        std::string const name;
        int grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string const name_tg, int const grade_tg);
        Bureaucrat(Bureaucrat const &origin);
        ~Bureaucrat();

        const std::string& getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(AForm const &to_sign);
        void executeForm(AForm const &form);

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

        Bureaucrat &operator=( Bureaucrat const &src);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& toPrint);

#endif