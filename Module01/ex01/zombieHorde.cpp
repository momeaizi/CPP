/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:27:53 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/19 19:30:10 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *zombies = new Zombie[N] ;
    
    for (int i = 0; i < N; i++)
        zombies[i].setName(name);
    return zombies;
}