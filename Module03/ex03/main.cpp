/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:55:55 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/22 14:48:22 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"




int main()
{
    DiamondTrap taha("taha");

    taha.whoAmI();
    for (int i = 0; i < 100; i++)
        taha.attack("sultan");
    for (int i = 0; i < 100; i++)
        taha.takeDamage(90);
    for (int i = 0; i < 100; i++)
        taha.beRepaired(90);
    DiamondTrap test;
    test = taha;
    test.whoAmI();
}