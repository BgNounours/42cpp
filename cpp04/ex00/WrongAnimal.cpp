#include "WrongAnimal.hpp"

//createur et destructeur
WrongAnimal::WrongAnimal()
{
    std::cout << "A fake animal came to existence!" << std::endl;
    type = "unknown bot";
}

WrongAnimal::WrongAnimal(const WrongAnimal &origin)
{
    *this = origin;
    std::cout << "The bot has been cloned" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "ROBOTIC DESTROYED!!!!!1!11!" << std::endl;
}

//fonction
void WrongAnimal::makeSound() const
{
    std::cout << type << " said: ";
    std::cout << "Bip bip boup boup *crashed*" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const src)
{
    type = src.type;
    return *this;
}