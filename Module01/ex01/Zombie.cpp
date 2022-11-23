/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:19:46 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/22 17:25:58 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name ( name ) {}

Zombie::Zombie() {}

Zombie::~Zombie()
{
    std::cout  << name << " IS DEAD!\n"; 
}

void    Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
void    Zombie::setName( std::string name )
{
    this->name = name;
}