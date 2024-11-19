#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain();
        Brain(Brain const &origin);
        ~Brain();
        Brain &operator=( Brain const &src);
    
    private:
        std::string ideas[100];
};

#endif