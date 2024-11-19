#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "The beast was a dog!" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &origin) : Animal(origin)
{
    *this = origin;
    std::cout << "The dog as been succesfully cloned" << std::endl;
}

Dog::~Dog()
{
    std::cout << "The dog is about to get annihilated" << std::endl;
}

Dog &Dog::operator=(Dog const src)
{
    type = src.type;
    return *this;
}