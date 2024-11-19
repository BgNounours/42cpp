#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << "/// ANIMALS DOGS AND CATS ///" << std::endl << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete i;
    delete j;

    std::cout << std::endl << std::endl << "/// WRONGANIMALS AND WRONGCATS///" << std::endl << std::endl;
    const WrongAnimal* metaW = new WrongAnimal();
    const WrongAnimal* iW = new WrongCat();

    std::cout << iW->getType() << " " << std::endl;
    iW->makeSound(); //will output the wrong cat sound!
    metaW->makeSound();

    delete metaW;
    delete iW;
}