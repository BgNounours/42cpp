#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &origin);
        ~Dog();
        Dog &operator=( Dog const src);
        void makeSound() const;

    private:
        Brain *brain;
};

#endif