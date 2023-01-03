/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 10:52:38 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/02 10:54:33 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    (void) wrongcat;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "🔉 Meow Meow Meow" << std::endl;
}
