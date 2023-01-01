/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 14:30:59 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/01 13:05:37 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureau("sa3adat l9ayd", 14);
        
        Form        form("Certificate of celibacy", 15, 15);
        
        form.beSigned(bureau);

        bureau.signForm(form);
        
        std::cout << form << std::endl;
        std::cout << bureau << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}