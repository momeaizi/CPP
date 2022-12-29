#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type ("----")
{
    std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type (type)
{
    std::cout << "WrongAnimal parametrize constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal)
{
    std::cout << "WrongAnimal copy constructor" << std::endl;
    *this = wrongAnimal;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
    std::cout << "WrongAnimal copy assignement operator" << std::endl;
    this->type = wrongAnimal.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << std::endl;
}

const std::string   &WrongAnimal::getType() const
{
    return type;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Wrong animal sound" << std::endl;
}
