/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:56:45 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/05 10:06:06 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

Base    *generate(void)
{
    srand((unsigned) time(NULL));
	int random = rand();

    if (!(random % 3))
        return new B;
    if (!(random % 2))
        return new A;
    return new C;
}

void    identify(Base* p)
{
    std::cout << "This pointer point to an object of ";

    if (dynamic_cast<A*>(p))
        std::cout << "type :  A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "type :  B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "type :  C" << std::endl;
    else
        std::cout << "unknown type!" << std::endl;
}

void    identify(Base& p)
{
    std::cout << "This reference refere to an object of ";

    try
    {
        A a = dynamic_cast<A&>(p);
        std::cout << "type :  A" << std::endl;
        return ;
    }
    catch(std::bad_cast) {}
    
    try
    {
        B b = dynamic_cast<B&>(p);
        std::cout << "type :  B" << std::endl;
        return ;
    }
    catch(std::bad_cast) {}
    
    try
    {
        C c = dynamic_cast<C&>(p);
        std::cout << "type :  C" << std::endl;
        return ;
    }
    catch(std::bad_cast) {}
    
    std::cout << "unknown type!" << std::endl;
}
