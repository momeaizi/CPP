/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 14:30:59 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/31 15:35:09 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureau("bureau", 150);
        bureau.increment();
        // Bureaucrat bureau("bureau", 1);
        // bureau.decrement();
        std::cout << bureau << std::endl;
    }
    catch (GradeTooHighException &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    catch (GradeTooLowException &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}