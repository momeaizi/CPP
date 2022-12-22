/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:32:11 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/21 15:21:58 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap ("----", 100, 100, 30)
{
    std::cout << "FragTrap default constructor is called\n\n";
}

FragTrap::FragTrap(const std::string &name) : ClapTrap (name, 100, 100, 30)
{
    std::cout << "FragTrap parametrize constructor is called\n\n";
}

FragTrap::FragTrap(FragTrap const &FragTrap)
{
    std::cout << "FragTrap copy constructor is called\n\n";
    *this = FragTrap;
}

FragTrap &FragTrap::operator=(FragTrap const &FragTrap)
{
    std::cout << "FragTrap copy assignement constructor is called\n\n";
    this->name = FragTrap.name;
    this->Hit = FragTrap.Hit;
    this->Energy = FragTrap.Energy;
    this->Attack = FragTrap.Attack;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor is called\n\n";
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap High Five Guys!\n\n";
}