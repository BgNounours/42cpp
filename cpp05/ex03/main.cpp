#include "Intern.hpp"

void	printError(std::exception& e)
{
	std::cout << "Error: " << e.what() << std::endl;
}

int main()
{
	Intern	kiddo;
	AForm	*form = kiddo.makeForm("presidential pardon form", "luke");
	AForm	*forme = kiddo.makeForm("robotomy request form", "cronky");
	AForm	*forma = kiddo.makeForm("shrubbery creation form", "flower");
	AForm	*formy;

	try
	{
		formy = kiddo.makeForm("bamboo", "flower");
	}
	catch (std::exception& e)
	{
		printError(e);
	}

	formy = new PresidentialPardonForm();
	Bureaucrat	*bur = new Bureaucrat("slave", 4);
	Bureaucrat	*low = new Bureaucrat("miskine", 150);

	bur->signForm(*form);
	form->beSigned(*bur);
	bur->signForm(*form);

	bur->signForm(*forme);
	forme->beSigned(*bur);

	std::cout << std::endl << "///PRESIDENTIAL PARDON///" << std::endl << std::endl;

	bur->executeForm(*form);
	form->execute(*bur);

	std::cout << std::endl << "///ROBOTOMY REQUEST///" << std::endl << std::endl;

	bur->executeForm(*forme);
	forme->execute(*bur);

	std::cout << std::endl << "///SHRUBBERY CREATION///" << std::endl << std::endl;

	try
	{
		low->executeForm(*forma);
	}
	catch (std::exception& e)
	{
		printError(e);
	}

	try
	{
		low->signForm(*forma);
	}
	catch (std::exception& e)
	{
		printError(e);
	}
	bur->signForm(*forma);
	forma->beSigned(*bur);

	try
	{
		low->executeForm(*forma);
	}
	catch (std::exception& e)
	{
		printError(e);
	}
	bur->executeForm(*forma);
	forma->execute(*bur);

	std::cout << std::endl;

	delete formy;
	delete bur;
	delete form;
	delete low;
	delete forme;
	delete forma;
}