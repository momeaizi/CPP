/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 14:30:59 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/01 10:08:46 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        // Bureaucrat bureau("bureau", -160);

        
        // Bureaucrat bureau("bureau", 160);


        Bureaucrat bureau("bureau", 150);
        // bureau.decrementGrade();
        
        // Bureaucrat bureau("bureau", 1);
        // bureau.incrementGrade();
        
        std::cout << bureau << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}