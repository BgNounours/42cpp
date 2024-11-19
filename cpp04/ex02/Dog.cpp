#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "The beast was a dog!" << std::endl;
    type = "Dog";
    std::cout << "The dog brain is growing!" << std::endl;
    brain = new Brain;
}

Dog::Dog(const Dog &origin) : Animal(origin)
{
    *this = origin;
    std::cout << "The dog as been succesfully cloned" << std::endl;
}

Dog::~Dog()
{
    std::cout << "The dog is about to get annihilated" << std::endl;
    std::cout << "Lobotomizing the dog" << std::endl;
    delete brain;
}

Dog &Dog::operator=(Dog const src)
{
    type = src.type;
	if (brain)
		delete brain;
	brain = new Brain();
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "WOUF BWARF WAF WAF OUAF GRRRR" << std::endl;
}