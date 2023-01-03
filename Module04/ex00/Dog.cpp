/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 10:53:00 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/02 10:54:20 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal ("Dog")
{
    std::cout << "Dog default constructor" << std::endl;
}


Dog::Dog(const Dog &dog) : Animal("Dog")
{
    std::cout << "Dog copy constructor" << std::endl;
    *this = dog;
}

Dog  &Dog::operator=(const Dog &dog)
{
    std::cout << "Dog copy assignement operator" << std::endl;
    (void) dog;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "🔉 Woof Woof Woof" << std::endl;
}
