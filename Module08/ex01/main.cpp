/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:50:01 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/16 09:18:26 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"


int main()
{
    int arr[] = {6, 3, 17, 9, 16, 11};
    try
    {
        Span sp(20);
    
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(16);
        sp.addNumbers(arr, 6);
        std::cout << "Span: [ " << sp << "]" << std::endl;
        
        std::cout << "shortestspan: " << sp.shortestSpan() << std::endl;
        std::cout << "longestspan: " << sp.longestSpan()  << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}