/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:52:12 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/15 18:06:28 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name (""), Hit (10), Energy (10), Attack (0)
{
    std::cout << "default constructor is called\n";
}

ClapTrap::ClapTrap(const std::string name) : name (name), Hit (10), Energy (10), Attack (0)
{
    std::cout << "parametrize constructor is called\n";
}

ClapTrap::ClapTrap(ClapTrap const &claptrap)
{
    std::cout << "copy constructor is called\n";
    *this = claptrap;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &claptrap)
{
    std::cout << "copy assignement operator is called\n";
    this->name = claptrap.name;
    this->Hit = claptrap.Hit;
    this->Energy = claptrap.Energy;
    this->Attack = claptrap.Attack;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor is called\n";
}

void    ClapTrap::attack(const std::string& target)
{
    if (!Energy)
    {
        std::cout << "There's no Energy points to do attacking\n";
        return ;
    }
    Energy--;
    std::cout << "ClapTrap " << name << " attacks " << target<< ", causing " << Attack << " points of damage!\n";
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " take " << amount<< " points of damage!\n";
    Hit -= amount;
    if (amount > Hit)
        Hit = 0;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (!Energy)
    {
        std::cout << "There's no Energy points to do repairing!\n";
        return ;
    }
    
    std::cout << "ClapTrap " << name << " repaired " << amount << " points of Hit!" << std::endl;
    Energy--;
    Hit += amount;
}

