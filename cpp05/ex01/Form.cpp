#include "Bureaucrat.hpp"

//createur et destructeur
Form::Form() : name("random paper"), grade_toSign(150), grade_toExec(120)
{
    BeenSigned = 0;
    std::cout << "A random unsigned paper has been found" << std::endl;
}

Form::Form(std::string const _name, int const ts, int const te) : name(_name), grade_toSign(ts), grade_toExec(te)
{
    BeenSigned = 0;
    if (grade_toSign > 150)
        throw GradeTooLowException();
    if (grade_toExec < 1)
        throw GradeTooHighException();
    std::cout << "The form \"" << name << "\" has been found" << std::endl;
}

Form::Form(const Form &origin) : grade_toSign(origin.getGrade_toSign()), grade_toExec(origin.getGrade_toExec())
{
    *this = origin;
    std::cout << "The paper \"" << name << "\" has been photocopied" << std::endl;
}

Form::~Form()
{
    std::cout << "The paper \"" << name << "\" has been sent to the shredder" << std::endl;
}

//fonction
const std::string& Form::getName() const
{
    return name;
}

int Form::getGrade_toSign() const
{
    return grade_toSign;
}

int Form::getGrade_toExec() const
{
    return grade_toExec;
}

bool Form::getSigned() const
{
    return BeenSigned;
}

void Form::beSigned(const Bureaucrat &signing)
{
    if (signing.getGrade() > grade_toSign)
        throw GradeTooLowException();
    BeenSigned = 1;
}

//exception
const char*	Form::GradeTooLowException::what() const throw()
{
	return "Form grade too low!";
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return "Form grade too high!";
}

//surcharge
Form& Form::operator=(const Form &src)
{
	if (this != &src)
		BeenSigned = src.BeenSigned;
	return *this;
}

std::ostream& operator<<(std::ostream &os, const Form &toPrint)
{
	os << "\"" << toPrint.getName() << "\"" << std::endl << "Grade to sign: " << toPrint.getGrade_toSign() << std::endl;
    os << "Grade to execute: " << toPrint.getGrade_toExec() << std::endl;
    os << "Been signed: ";
    if (toPrint.getSigned() == 1)
        os << "Yes" << std::endl;
    else
        os << "No" << std::endl;
    os << std::endl;
	return os;
}
