/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:30:46 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/08 16:25:43 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>


void    testComplexType()
{
    Array<std::string> strs(4);

    try
    {
        strs[0] = "mohamed";
        strs[1] = "taha";
        strs[2] = "meaizi";
        strs[3] = "1337";
        // Array<std::string>  *p = &strs;
        // strs = *p;
        
        // strs[-4] = "1337";

        for (unsigned int i = 0; i < strs.size(); i++)
            std::cout << strs[i] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}


void    testCopieying()
{
    Array<int>   arr(8);
    
    for (unsigned int i = 0; i < arr.size(); i++)
        arr[i] = i * i;

    {
        // Array<int>   arr1 = arr;
        Array<int>   arr1;
        arr1 = arr;
        for (unsigned int i = 0; i < arr1.size(); i++)
            std::cout << arr1[i] << std::endl;

    }
    std::cout << "-------------------------" << std::endl;
    for (unsigned int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << std::endl;
}


int main()
{
    // testCopieying();
    testComplexType();
    // system("leaks array");
}