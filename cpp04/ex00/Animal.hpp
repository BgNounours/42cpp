#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:
        Animal();
        Animal(const Animal &origin);
        ~Animal();
        Animal &operator=( Animal const src);
        void makeSound() const;
        std::string getType() const;

    protected:
        std::string type;
};

#endif