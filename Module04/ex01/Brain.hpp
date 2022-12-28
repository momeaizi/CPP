#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string ideas[100];
        int         i;
    public:
        Brain();
        Brain(const Brain &brain);
        Brain   &operator=(const Brain &brain);
        virtual ~Brain();

        void    addIdea(std::string idea);
        const std::string   *getIdea();
};


#endif