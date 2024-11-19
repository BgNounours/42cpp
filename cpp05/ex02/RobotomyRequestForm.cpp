#include "RobotomyRequestForm.hpp"

//constructeur et destructeur

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy request form", 72, 45), grade_toSign(72), grade_toExec(45)
{
    target = "an unlucky civilian";
    BeenSigned = 0;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const _target) : AForm("robotomy request form", 72, 45), grade_toSign(72), grade_toExec(45)
{
    target = _target;
    BeenSigned = 0;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &origin) : AForm("robotomy request form", 72, 45), grade_toSign(72), grade_toExec(45)
{
    target = origin.getTarget();
    BeenSigned = 0;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

//fonction

std::string const RobotomyRequestForm::getTarget() const
{
    return (target);
}

void RobotomyRequestForm::executing() const
{
    int success;

    std::cout << "beep bee" << std::endl << "vrrrrrr DRIIIII BOOM" << std::endl << "beep beep" << std::endl << std::endl;
    srand(time(NULL));
    success = rand() % 2;
    if (success == 1)
        std::cout << target << " has been successfully robotomized!" << std::endl;
    else
        std::cout << target << "robotomization turned badly :(" << std::endl;
}