/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:50:47 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/18 12:26:47 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

int	main(int ac, char **av)
{
	PhoneBook	motorola;
	std::string	line;

    if (ac != 1 || av[1])
        return (1);
    std::cout << "AVAILABLE   CMDS : \n";
    std::cout << "                  -> ADD\n";
    std::cout << "                  -> SEARCH \n";
    std::cout << "                  -> EXIT\n";
	while (!std::cin.eof())
	{
		std::cout << ">> ";
		std::getline(std::cin, line);
		if (line == "ADD")
			motorola.addContact();
		else if (line == "SEARCH")
			motorola.search();
		else if (line == "EXIT")
			return (2);
        else
        {
            std::cout << "COMMAND NOT FOUND !\n";
            std::cout << "AVAILABLE   CMDS : \n";
            std::cout << "                  -> ADD\n";
            std::cout << "                  -> SEARCH \n";
            std::cout << "                  -> EXIT\n";
        }
	}
}