/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:55:55 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/24 09:52:52 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap taha("taha");

    
    taha.attack("sultan");
    taha.attack("sultan");
    taha.attack("sultan");
    taha.takeDamage(10);
    taha.beRepaired(10);
    taha.beRepaired(10);
    taha.beRepaired(10);
    taha.beRepaired(10);
    taha.beRepaired(10);
    taha.beRepaired(10);
    taha.beRepaired(10);
    taha.attack("sultan");
    taha.attack("sultan");
    taha.guardGate();
}