#include "Cat.hpp"


Cat::Cat() : Animal ("Cat"), brain (new Brain)
{
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal ("Cat"), brain (new Brain)
{
    *this = cat;
    std::cout << "Cat copy constructor" << std::endl;
}

Cat  &Cat::operator=(const Cat &cat)
{
    *this->brain = *cat.brain;
    std::cout << "Cat copy assignement operator" << std::endl;
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Meow Meow Meow" << std::endl;
}
