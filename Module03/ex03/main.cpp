/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:55:55 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/24 10:14:40 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"




int main()
{
    DiamondTrap taha("taha");

    taha.whoAmI();
    for (int i= 0; i < 51; i++)
        taha.attack("sultan");
    taha.guardGate();
    taha.highFivesGuys();
}