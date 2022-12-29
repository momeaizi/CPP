#include "Brain.hpp"

Brain::Brain() : i (0)
{
    std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain &brain) : i (0)
{
    std::cout << "Brain copy constructor" << std::endl;
    *this = brain;
}

Brain   &Brain::operator=(const Brain &brain)
{
    std::cout << "Brain copy assignement operator" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = brain.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor" << std::endl;
}

void    Brain::addIdea(std::string idea)
{
    ideas[i++ % 100] = idea;
}

const std::string   *Brain::getIdea()
{
    return ideas;
}

