#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "The bot is a little cat bot!" << std::endl;
    type = "Cat";
}

WrongCat::WrongCat(const WrongCat &origin) : WrongAnimal(origin)
{
    *this = origin;
    std::cout << "The cat bot has been cloned" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "The cat bot is about to get destroyed" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const src)
{
    type = src.type;
    return *this;
}