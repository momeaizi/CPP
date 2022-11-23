/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:10:05 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/19 22:17:47 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}
Weapon::~Weapon() {}

const   std::string  &Weapon::getType()
{
    return type;
}
void    Weapon::setType(std::string type)
{
    this->type = type;
}