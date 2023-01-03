/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 10:52:54 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/02 10:54:11 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type ("----")
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
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}

const std::string   &Animal::getType() const
{
    return type;
}

void    Animal::makeSound() const
{
    std::cout << "🔉 Animal sound" << std::endl;
}
