#include "PresidentialPardonForm.hpp"

//constructeur et destructeur

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential pardon form", 25, 5), grade_toSign(25), grade_toExec(5)
{
    target = "a lucky civilian";
    BeenSigned = 0;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const _target) : AForm("presidential pardon form", 25, 5), grade_toSign(25), grade_toExec(5)
{
    target = _target;
    BeenSigned = 0;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &origin) : AForm("presidential pardon form", 25, 5), grade_toSign(25), grade_toExec(5)
{
    target = origin.getTarget();
    BeenSigned = 0;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

//fonction

std::string const PresidentialPardonForm::getTarget() const
{
    return (target);
}

void PresidentialPardonForm::executing() const
{
    std::cout << target << " has been pardoned by the great and mighty Zaphod Beeblebrox" << std::endl;
}