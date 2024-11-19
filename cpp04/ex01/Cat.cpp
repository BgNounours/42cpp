#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "The beast is a little cat!" << std::endl;
    type = "Cat";
    std::cout << "The cat's brain is growing!" << std::endl;
    brain = new Brain;
}

Cat::Cat(const Cat &origin) : Animal(origin)
{
    *this = origin;
    std::cout << "The cat has been cloned" << std::endl;
}

Cat::~Cat()
{
    std::cout << "The cat is about to get destroyed" << std::endl;
    std::cout << "Lobotomizing the cat" << std::endl;
    delete brain;
}

Cat &Cat::operator=(Cat const src)
{
    type = src.type;
	if (brain)
		delete brain;
	brain = new Brain();
    return *this;
}