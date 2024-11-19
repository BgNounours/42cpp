#include "ShrubberyCreationForm.hpp"

//constructeur et destructeur

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery creation form", 145, 137), grade_toSign(145), grade_toExec(137)
{
    target = "root";
    BeenSigned = 0;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const _target) : AForm("shrubbery creation form", 145, 137), grade_toSign(145), grade_toExec(137)
{
    target = _target;
    BeenSigned = 0;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &origin) : AForm("shrubbery creation form", 145, 137), grade_toSign(145), grade_toExec(137)
{
    target = origin.getTarget();
    BeenSigned = 0;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

//fonction

std::string const ShrubberyCreationForm::getTarget() const
{
    return (target);
}

void ShrubberyCreationForm::executing() const
{
    std::string     tree_name = target + "_shrubbery";
    std::ofstream   outfile(tree_name.c_str());

    outfile << "      _ _" << std::endl;
    outfile << "    _{ ' }_" << std::endl;
    outfile << "   { `.!.` }" << std::endl;
    outfile << "   ',_/Y\\_,'" << std::endl;
    outfile << "     {_,_}" << std::endl;
    outfile << "       |" << std::endl;
    outfile << "     (\\|  /)" << std::endl;
    outfile << "      \\| //" << std::endl;
    outfile << "       |//" << std::endl;
    outfile << "    \\\\ |/  //" << std::endl;
    outfile << "^^^^^^^^^^^^^^^" << std::endl;

    outfile.close();
}