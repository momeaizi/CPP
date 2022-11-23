/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:00:35 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/23 19:49:20 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

void	megaphone(char *str)
{
	for (int i = 0; str[i]; i++)
	{
		if (islower(str[i]))
			str[i] -= 32;
		std::cout << str[i];
	}
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
		megaphone(av[i]);
	std::cout << std::endl;
}

