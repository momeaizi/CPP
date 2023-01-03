/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 10:59:11 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/02 11:08:24 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal ("Cat"), brain (new Brain)
{
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal ("Cat"), brain (new Brain)
{
    std::cout << "Cat copy constructor" << std::endl;
    *this = cat;
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

Brain   *Cat::getBrain()
{
    return brain;
}
