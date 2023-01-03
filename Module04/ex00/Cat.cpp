/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 10:52:58 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/02 10:54:15 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal ("Cat")
{
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal ("Cat")
{
    std::cout << "Cat copy constructor" << std::endl;
    *this = cat;
}

Cat  &Cat::operator=(const Cat &cat)
{
    std::cout << "Cat copy assignement operator" << std::endl;
    (void) cat;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "🔉 Meow Meow Meow" << std::endl;
}
