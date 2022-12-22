/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:52:12 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/20 17:48:48 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name ("----"), Hit (100), Energy (50), Attack (20)
{
    std::cout << "ClapTrap default constructor is called\n\n";
}

ClapTrap::ClapTrap(const std::string name) : name (name), Hit (100), Energy (50), Attack (20)
{
    std::cout << "ClapTrap parametrize constructor is called\n\n";
}

ClapTrap::ClapTrap(const std::string name, int Hit, int Energy, int Attack) : name (name), Hit (Hit), Energy (Energy), Attack (Attack)
{
    std::cout << "ClapTrap parametrize constructor is called\n\n";
}

ClapTrap::ClapTrap(ClapTrap const &claptrap)
{
    std::cout << "ClapTrap copy constructor is called\n\n";
    *this = claptrap;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &claptrap)
{
    std::cout << "ClapTrap copy assignement operator is called\n\n";
    this->name = claptrap.name;
    this->Hit = claptrap.Hit;
    this->Energy = claptrap.Energy;
    this->Attack = claptrap.Attack;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor is called\n\n";
}

void    ClapTrap::attack(const std::string& target)
{
    if (!Energy)
    {
        std::cout << "There's no Energy points to do attacking\n\n";
        return ;
    }
    Energy--;
    std::cout << "ClapTrap " << name << " attacks " << target<< ", causing " << Attack << " points of damage!\n\n";
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << name << " take " << amount<< " points of damage!\n\n";
    if (amount > Hit)
        Hit = 0;
    else
        Hit -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (!Energy)
    {
        std::cout << "There's no Energy points to do repairing!\n\n";
        return ;
    }
    
    std::cout << "ClapTrap " << name << " repaired " << amount << " points of Hit!\n\n";
    Energy--;
    Hit += amount;
}
