/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:27:16 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/22 17:25:16 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    Zombie  *z1 = zombieHorde(10, "RIIIIICK");
    
    for (int i = 0; i < 10; i++)
        z1->announce();
    delete [] z1;
}