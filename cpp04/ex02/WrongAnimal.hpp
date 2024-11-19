#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &origin);
        ~WrongAnimal();
        WrongAnimal &operator=( WrongAnimal const src);
        void makeSound() const;
        std::string getType() const;

    protected:
        std::string type;
};

#endif