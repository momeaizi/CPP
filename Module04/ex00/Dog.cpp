#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(std::string type) : Animal (type)
{
    std::cout << "Dog parametrize constructor" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog.type)
{
    std::cout << "Dog copy constructor" << std::endl;
}

Dog  &Dog::operator=(const Dog &dog)
{
    std::cout << "Dog copy assignement operator" << std::endl;
    this->type = dog.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Woof Woof Woof" << std::endl;
}
