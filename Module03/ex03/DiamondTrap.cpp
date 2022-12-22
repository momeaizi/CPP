/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:46:00 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/22 14:29:22 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() : ClapTrap("----_clap_name", 100, 50, 30), ScavTrap("----"), FragTrap("----"), name ("----")
{
    std::cout << "DiamondTrap default constructor is called\n\n";
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30),  ScavTrap(name), FragTrap(name), name (name)
{
    std::cout << "DiamondTrap parametrize constructor is called\n\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamondTrap)
{
    std::cout << "DiamondTrap copy constructor is called\n\n";
    *this = diamondTrap;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &diamondTrap)
{
    std::cout << "DiamondTrap copy assignement operator is called\n\n";

    this->DiamondTrap::name = diamondTrap.DiamondTrap::name;
    this->ClapTrap::name = diamondTrap.ClapTrap::name;
    this->Hit = diamondTrap.Hit;
    this->Energy = diamondTrap.Energy;
    this->Attack = diamondTrap.Attack;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor is called\n\n";
}

void DiamondTrap::whoAmI()
{
    std::cout << "My DiamondTrap name is >> " << name << " and my ClapTrap name is >> " << ClapTrap::name << "\n\n";
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}
