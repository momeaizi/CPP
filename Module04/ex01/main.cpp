#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


void    testingDestruction()
{
    Animal  **animals = new Animal* [100];

    for (int i = 0; i < 50; i++)
        animals[i] = new Cat;

    for (int i = 50; i < 100; i++)
        animals[i] = new Dog;

    for (int i = 0; i < 100; i++)
        delete animals[i];
    delete [] animals;
}

void    testingCopying()
{
    Cat  *cat1 = new Cat();
    Cat  *cat2 = new Cat(*cat1);


    delete  cat1;
    delete  cat2;

    std::cout << "*****************************" << std::endl;
    
    Dog  *dog1 = new Dog();
    Dog  *dog2 = new Dog(*dog1);


    delete  dog1;
    delete  dog2;
}

int main()
{
    testingDestruction();
    testingCopying();
    return 0;
}
