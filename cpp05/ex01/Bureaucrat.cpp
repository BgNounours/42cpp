#include "Bureaucrat.hpp"

//createur et destructeur
Bureaucrat::Bureaucrat(void) : name("Bobert")
{
    std::cout << std::endl << "A bureaucrat named " << name << " has been employed! It's grade is 150" << std::endl << std::endl;
    grade = 150;
}

Bureaucrat::Bureaucrat(std::string const name_tg, int const grade_tg) : name(name_tg)
{
    grade = grade_tg;
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    std::cout << std::endl << "A bureaucrat named " << name << " has been employed! It's grade is " << grade << std::endl << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &origin)
{
    *this = origin;
    std::cout << "Need more employee, " << name << " has been cloned" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "The bureaucrat called " << name << " has been FIRED!" << std::endl;
}

//fonction
const std::string&   Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::incrementGrade()
{
    if (grade - 1 < 1)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade()
{
    if (grade + 1 > 150)
        throw GradeTooLowException();
    grade++;
}

void Bureaucrat::signForm(Form const &to_sign)
{
    if (to_sign.getSigned() == 0)
    {
        if (grade > to_sign.getGrade_toSign())
            throw GradeTooLowException(); 
        else
            std::cout << name << "signed \"" << to_sign.getName() << "\"" << std::endl;
    }
    else
        std::cout << "\"" << to_sign.getName() << "\" already signed" << std::endl;
}

//exception
const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat grade too low!";
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat grade too high!";
}

//surcharge
Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
		grade = src.grade;
	return *this;
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &toPrint)
{
	os << toPrint.getName() << ", bureaucrat grade " << toPrint.getGrade() << "." << std::endl;
	return os;
}