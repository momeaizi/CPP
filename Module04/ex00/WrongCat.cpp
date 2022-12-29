#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal ("WrongCat")
{
    std::cout << "WrongCat default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat) : WrongAnimal (wrongcat.type)
{
    std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat  &WrongCat::operator=(const WrongCat &wrongcat)
{
    std::cout << "WrongCat copy assignement operator" << std::endl;
    this->type = wrongcat.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "Meow Meow Meow" << std::endl;
}
