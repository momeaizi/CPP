/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:27:16 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/26 11:23:39 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  *zobmie = newZombie("Riiiiick");
    if (zobmie)
        zobmie->announce();
    randomChump("Moooorty");
    delete zobmie;
}