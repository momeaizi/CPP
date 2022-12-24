/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:58:34 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/24 09:46:41 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap taha("taha");

    taha.attack("sultan");
    taha.takeDamage(10);
    taha.takeDamage(10);
    taha.takeDamage(10);
    taha.takeDamage(10);
    taha.takeDamage(10);
    taha.takeDamage(1000);
    taha.beRepaired(10);
    taha.beRepaired(10);
    taha.beRepaired(10);
    taha.beRepaired(10);
    taha.beRepaired(10);
    taha.beRepaired(10);
    taha.beRepaired(10);
    taha.attack("sultan");
    taha.attack("sultan");
    taha.attack("sultan");
    taha.attack("sultan");
}