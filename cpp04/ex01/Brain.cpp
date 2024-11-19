#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "A brain is ready to be filled with thought" << std::endl;
}

Brain::Brain(Brain const &origin)
{
    *this = origin;
    std::cout << "Brain copied" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed" << std::endl;
}

Brain &Brain::operator=( Brain const &src )
{
	for (int i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
	return *this;
}