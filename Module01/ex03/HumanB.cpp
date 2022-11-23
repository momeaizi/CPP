/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:04:56 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/22 17:38:19 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name (name), weapon (NULL) {}

HumanB::~HumanB() {}

void    HumanB::attack(void)
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon *weapon)
{
    this->weapon = weapon;
}