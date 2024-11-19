#include "Animal.hpp"

//createur et destructeur
Animal::Animal()
{
    std::cout << "An animal came to existence!" << std::endl;
    type = "unknown beast";
}

Animal::Animal(const Animal &origin)
{
    type = origin.type;
    std::cout << "The animal has been cloned" << std::endl;
}

Animal::~Animal()
{
    std::cout << "ANIMAL DESTROYED!!!!!1!11!" << std::endl;
}

Animal &Animal::operator=(Animal const &src)
{
    type = src.type;
    return *this;
}


//fonction
void Animal::makeSound() const
{
    std::cout << type << " said: ";
    if (type.compare("Dog") == 0)
        std::cout << "WOOF WOOF, WAOURF WOUF WAOURF WAF" << std::endl;
    if (type.compare("Cat") == 0)
        std::cout << "MEOW Meow, mraouuo *purr*" << std::endl;
    else
        std::cout << "*random animal noise*" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}