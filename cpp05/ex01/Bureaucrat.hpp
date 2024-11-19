#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

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
        void signForm(Form const &to_sign);

        class GradeTooHighException: public std::exception
        {
            virtual const char*	what() const throw(); 
        };
        class GradeTooLowException: public std::exception
        {
            virtual const char*	what() const throw(); 
        };

        Bureaucrat &operator=( Bureaucrat const &src);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& toPrint);

#endif