/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:15:38 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/15 18:37:24 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor is called\n";
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap (name)
{
    std::cout << "ScavTrap parametrize constructor is called\n";
}

ScavTrap::ScavTrap(ScavTrap const &ScavTrap)
{
    std::cout << "ScavTrap copy constructor is called\n";
    *this = ScavTrap;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &scavTrap)
{
    std::cout << "ScavTrap copy assignement constructor is called\n";
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor is called\n";
}

void    ScavTrap::guardGate()
{
    std::cout << getName() << " Gate keeper modeis activatited.!\n";
}