#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:

        virtual ~Animal();
        Animal &operator=( Animal const &src);
        virtual void makeSound() const = 0;
        std::string getType() const;

    protected:
        std::string type;
        Animal();
        Animal(const Animal &origin);
};

#endif