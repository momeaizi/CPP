/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:41:28 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/05 10:45:14 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
    Data    data;

    data.i = 10;
    data.l = 637581;
    data.c = 'c';
    data.b = true;

    std::cout << &data << std::endl;
    std::cout << data.i << std::endl;
    std::cout << data.l << std::endl;
    std::cout << data.c << std::endl;
    std::cout << data.b << std::endl;



    uintptr_t   address = serialize(&data);
    Data        *dataPtr = deserialize(address);
    
    std::cout << "\n\n******************************\n" << std::endl;

    std::cout << dataPtr    << std::endl;
    std::cout << dataPtr->i << std::endl;
    std::cout << dataPtr->l << std::endl;
    std::cout << dataPtr->c << std::endl;
    std::cout << dataPtr->b << std::endl;
    
}