/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:56:36 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/06 18:41:57 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int	main(int ac, char **av)
{
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(1);
    
	for (int i = 1; i < ac; i++)
	{
	    convert(av[i]);
        if (i + 1 < ac)
            std::cout << "\n--------------------------\n" << std::endl;
	}
}
