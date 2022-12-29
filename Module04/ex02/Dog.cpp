#include "Dog.hpp"

Dog::Dog() : Animal ("Dog"), brain (new Brain)
{
    std::cout << "Dog default constructor" << std::endl;
}


Dog::Dog(const Dog &dog) : Animal("Dog"), brain (new Brain)
{
    std::cout << "Dog copy constructor" << std::endl;
    *this = dog;
}

Dog  &Dog::operator=(const Dog &dog)
{
    *this->brain = *dog.brain;
    std::cout << "Dog copy assignement operator" << std::endl;
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Woof Woof Woof" << std::endl;
}
