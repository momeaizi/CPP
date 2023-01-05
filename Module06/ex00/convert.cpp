/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:37:00 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/05 16:48:18 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	convert(const std::string &str)
{
	std::cout << "char   : " << str << std::endl;
	std::cout << "int    : " << stoi(str) << std::endl;
	std::cout << "float  : " << stof(str) << std::endl;
	std::cout << "double : " << stod(str) << std::endl;
}


int	main(int ac, char **av)
{
	if (ac > 1)
		convert(av[1]);
}
