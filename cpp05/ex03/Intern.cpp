#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "A fresh and hopeful intern arrived!" << std::endl;
}

Intern::~Intern()
{
    std::cout << "The intern fled this hell of a company" << std::endl;
}

static AForm* president(const std::string _target)
{
    return(new PresidentialPardonForm(_target));
}

static AForm* robot(const std::string _target)
{
    return(new RobotomyRequestForm(_target));
}

static AForm* shrub(const std::string _target)
{
    return(new ShrubberyCreationForm(_target));
}

AForm* Intern::makeForm(const std::string _name, const std::string _target)
{
    const std::string true_name[] = {"presidential pardon form", "robotomy request form", "shrubbery creation form"};
    AForm* (*functptr[])(const std::string) = {president, robot, shrub};
    int     i = 0;

    while (i != 3)
    {
        if (_name == true_name[i])
            return ((*functptr[i])(_target));
        i++;
    }
    throw UnrecognizedFormException();
}

const char*	Intern::UnrecognizedFormException::what() const throw()
{
	return "The intern don't know what to do";
}
