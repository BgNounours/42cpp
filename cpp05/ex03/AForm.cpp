#include "Bureaucrat.hpp"

//createur et destructeur
AForm::AForm() : name("random paper"), grade_toSign(150), grade_toExec(120)
{
    BeenSigned = 0;
    std::cout << "A random unsigned paper has been found" << std::endl;
}

AForm::AForm(std::string const _name, int const ts, int const te) : name(_name), grade_toSign(ts), grade_toExec(te)
{
    BeenSigned = 0;
    if (grade_toSign > 150)
        throw GradeTooLowException();
    if (grade_toExec < 1)
        throw GradeTooHighException();
    std::cout << "The form \"" << name << "\" has been found" << std::endl;
}

AForm::AForm(const AForm &origin) : grade_toSign(origin.getGrade_toSign()), grade_toExec(origin.getGrade_toExec())
{
    *this = origin;
    std::cout << "The paper \"" << name << "\" has been photocopied" << std::endl;
}

AForm::~AForm()
{
    std::cout << "The paper \"" << name << "\" has been sent to the shredder" << std::endl;
}

//fonction
const std::string& AForm::getName() const
{
    return name;
}

int AForm::getGrade_toSign() const
{
    return grade_toSign;
}

int AForm::getGrade_toExec() const
{
    return grade_toExec;
}

bool AForm::getSigned() const
{
    return BeenSigned;
}

void AForm::beSigned(const Bureaucrat &signing)
{
    if (signing.getGrade() > grade_toSign)
        throw GradeTooLowException();
    else
        BeenSigned = 1;
}

void AForm::execute(Bureaucrat const & executor)
{
    if (BeenSigned == 0)
        throw FormUnsignedException();
    if (executor.getGrade() > grade_toExec)
        throw GradeTooLowException();
    executing();
}

void AForm::executing() const
{
    std::cout << "form executed" << std::endl;
}

//exception
const char*	AForm::GradeTooLowException::what() const throw()
{
	return "Form grade too low!";
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return "Form grade too high!";
}

const char*	AForm::FormUnsignedException::what() const throw()
{
	return "Form is unsigned!";
}
//surcharge
AForm& AForm::operator=(const AForm &src)
{
	if (this != &src)
		BeenSigned = src.BeenSigned;
	return *this;
}

std::ostream& operator<<(std::ostream &os, const AForm &toPrint)
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
