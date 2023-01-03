/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 14:30:59 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/03 16:04:59 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

		try
		{
			Bureaucrat  judy("judy", 150);
			Bureaucrat  alice("alice", 22);
			Bureaucrat  bob("bob", 56);

			Form        form("contract", 22, 23);


			std::cout << judy << std::endl;
			std::cout << alice << std::endl;
			std::cout << bob << std::endl;
			std::cout << form << std::endl;
			
			std::cout << "\n****************************\n" << std::endl;
			
			judy.signForm(form);
			alice.signForm(form);
			bob.signForm(form);
		}
		catch(std::exception &e)
		{
			std::cerr << "Exception caught : " << e.what() << std::endl;
		}
}