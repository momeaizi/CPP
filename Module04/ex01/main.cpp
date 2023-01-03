/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:00:38 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/02 11:20:41 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


void    testingDestruction()
{
    Animal  **animals = new Animal* [100];


    std::cout << "-->      🏗 constructing cats" << std::endl;
    for (int i = 0; i < 50; i++)
        animals[i] = new Cat;

    std::cout << "-->      🏗 constructing dogs" << std::endl;
    for (int i = 50; i < 100; i++)
        animals[i] = new Dog;

    std::cout << "-->      🏗 destructing animals" << std::endl;
    for (int i = 0; i < 100; i++)
        delete animals[i];
    delete [] animals;
}

void    testingCopying()
{
    Cat  *cat1 = new Cat();
    
    cat1->getBrain()->addIdea("i need to hunt a rat!");
    cat1->getBrain()->addIdea("i'm hungry!");
    cat1->getBrain()->addIdea("oops the dog is comming!");
    
    Cat  *cat2 = new Cat(*cat1);

    std::cout << "cat1 ideas :" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        if (!cat1->getBrain()->getIdea()[i].length())
            break ;
        std::cout << "      💡 idea n˚ " << i << ": " << cat1->getBrain()->getIdea()[i] << std::endl;
    }
    delete  cat1;
    
    std::cout << "cat2 ideas :" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        if (!cat2->getBrain()->getIdea()[i].length())
            break ;
        std::cout << "      💡 idea n˚ " << i << ": " << cat2->getBrain()->getIdea()[i] << std::endl;
    }
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
