#include "Animal.hpp"

Animal::Animal() : type ("")
{
    std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(std::string type) : type (type)
{
    std::cout << "Animal parametrize constructor" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Animal copy constructor" << std::endl;
    *this = animal;
}

Animal  &Animal::operator=(const Animal &animal)
{
    std::cout << "Animal copy assignement operator" << std::endl;
    this->type = animal.type;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}

const std::string   &Animal::getType() const
{
    return type;
}
