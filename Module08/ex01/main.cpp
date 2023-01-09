/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:50:01 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/09 13:36:06 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"


int main()
{
    try
    {
        Span sp = Span(5);
    
        sp.addNumber(6);
        std::cout << sp << std::endl;
        sp.addNumber(3);
        std::cout << sp << std::endl;
        sp.addNumber(17);
        std::cout << sp << std::endl;
        sp.addNumber(9);
        std::cout << sp << std::endl;
        sp.addNumber(11);
        std::cout << sp << std::endl;
        
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan()  << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}