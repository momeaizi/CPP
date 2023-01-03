/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 14:30:59 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/03 11:43:19 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    std::cout << "\n*********************************\n" << std::endl;
    
	try
	{
		Bureaucrat  human("Judy", 50);
    
		std::cout << human << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

    std::cout << "\n*********************************\n" << std::endl;
    
	try
	{
		Bureaucrat  human("Alice", 0);
    
		std::cout << human << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


    
    std::cout << "\n*********************************\n" << std::endl;
    
	try
	{
		Bureaucrat  human("Bob", 160);
    
		std::cout << human << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}