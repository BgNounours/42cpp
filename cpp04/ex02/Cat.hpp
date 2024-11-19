#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &origin);
        ~Cat();
        Cat &operator=( Cat const src);
        void makeSound() const;
    
    private:
        Brain *brain;
};

#endif