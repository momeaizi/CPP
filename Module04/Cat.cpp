#include "Cat.hpp"


Cat::Cat()
{
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(std::string type) : Animal (type)
{
    std::cout << "Cat parametrize constructor" << std::endl;
}

Cat::Cat(const Cat &cat)
{
    std::cout << "Cat copy constructor" << std::endl;
    *this = cat;
}

Cat  &Cat::operator=(const Cat &cat)
{
    std::cout << "Cat copy assignement operator" << std::endl;
    this->type = cat.type;
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Meow Meow Meow" << std::endl;
}
