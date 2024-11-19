#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "The beast is a little cat!" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &origin) : Animal(origin)
{
    *this = origin;
    std::cout << "The cat has been cloned" << std::endl;
}

Cat::~Cat()
{
    std::cout << "The cat is about to get destroyed" << std::endl;
}

Cat &Cat::operator=(Cat const src)
{
    type = src.type;
    return *this;
}