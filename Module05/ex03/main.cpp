/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 14:30:59 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/04 11:19:39 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Intern		luis;
		
		Bureaucrat  judy("judy", 71);
		Bureaucrat  alice("alice", 25);
		Bureaucrat  bob("bob", 136);

		Form		*home = luis.makeForm("ShrubberyCreationForm", "home");
		Form		*pardon = luis.makeForm("PresidentialPardonForm", "pardon");
		Form		*roboto = luis.makeForm("RobotomyRequestForm", "roboto");
		// Form		*unknownForm = luis.makeForm("unknownFormType", "unknownFormName");




		std::cout << "\n****************************\n" << std::endl;
		
		std::cout << judy << std::endl << std::endl;
			
		judy.executeForm(*home);
		std::cout << std::endl;
		judy.executeForm(*pardon);
		std::cout << std::endl;
		judy.executeForm(*roboto);
		
		// judy.executeForm(*unknownForm);
		
		std::cout << "\n****************************\n" << std::endl;
		
		std::cout << alice << std::endl << std::endl;
			
		alice.executeForm(*home);
		std::cout << std::endl;
		alice.executeForm(*pardon);
		std::cout << std::endl;
		alice.executeForm(*roboto);
		
		std::cout << "\n****************************\n" << std::endl;
		
		std::cout << bob << std::endl << std::endl;
			
		bob.executeForm(*home);
		std::cout << std::endl;
		bob.executeForm(*pardon);
		std::cout << std::endl;
		bob.executeForm(*roboto);
		
		std::cout << "\n****************************\n" << std::endl;
		
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception caught : " << e.what() << std::endl;
	}
	return (0);
}