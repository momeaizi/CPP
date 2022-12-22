/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:15:38 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/21 15:41:59 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap ("----", 100, 50, 20)
{
    std::cout << "ScavTrap default constructor is called\n\n";
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap (name, 100, 50, 20)
{
    std::cout << "ScavTrap parametrize constructor is called\n\n";
}

ScavTrap::ScavTrap(ScavTrap const &ScavTrap)
{
    std::cout << "ScavTrap copy constructor is called\n\n";
    *this = ScavTrap;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &scavTrap)
{
    std::cout << "ScavTrap copy assignement constructor is called\n\n";
    this->name = scavTrap.name;
    this->Hit = scavTrap.Hit;
    this->Energy = scavTrap.Energy;
    this->Attack = scavTrap.Attack;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor is called\n\n";
}

void    ScavTrap::attack(const std::string& target)
{
    if (!Energy)
    {
        std::cout << "There's no Energy points to do attacking\n\n";
        return ;
    }
    Energy--;
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << Attack << " points of damage!\n\n";
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << ": Gate keeper mode is activatited.!\n\n";
}