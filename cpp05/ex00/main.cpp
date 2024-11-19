#include "Bureaucrat.hpp"

void	sectionTitle(const std::string& title) {
	std::cout	<< std::endl
				<< "*** " << title << " ***"
				<< std::endl << std::endl;
}

int	main() {
	sectionTitle("constructor");

	try {
		Bureaucrat	pippo("pippo", 1);
		std::cout << pippo;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		Bureaucrat	poppi("poppi", -42);
		std::cout << poppi;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}


	try {
		Bureaucrat	poppi("poppi", 4242);
		std::cout << poppi;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	sectionTitle("increment");

	try {
		Bureaucrat	pippo("pippo", 2);
		std::cout << pippo;
		pippo.incrementGrade();
		std::cout << pippo;
		pippo.incrementGrade(); // too high!
		std::cout << pippo;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	sectionTitle("decrement");

	try {
		Bureaucrat	pippo("pippo", 149);
		std::cout << pippo;
		pippo.decrementGrade();
		std::cout << pippo;
		pippo.decrementGrade(); // too low!
		std::cout << pippo;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}