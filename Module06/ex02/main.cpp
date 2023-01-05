/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:03:19 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/05 10:05:28 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

int     main()
{
    A   a;
    
    identify(&a);
    identify(a);

    std::cout << "\n\n*****************************\n" << std::endl;
    
    B   b;
    
    identify(&b);
    identify(b);

    std::cout << "\n\n*****************************\n" << std::endl;
    
    C   c;
    
    identify(&c);
    identify(c);

    std::cout << "\n\n*****************************\n" << std::endl;
    
    Base   base;
    
    identify(&base);
    identify(NULL);
    identify(base);

    std::cout << "\n\n*****************************\n" << std::endl;
}