/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:00:57 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/19 22:17:33 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name (name), weapon (weapon) {}

HumanA::~HumanA() {}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}