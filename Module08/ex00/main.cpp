/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:50:01 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/08 18:47:36 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>
const char* NoOccurrenceFound::what() const throw()
{
    return "no occurrence found!";
}

int main()
{
    std::vector<int>    numbers(10);
    
    for (size_t i = 0; i < numbers.size(); i++)
    {
        numbers[i] = (i * i) / 2;
        std::cout << numbers[i] << std::endl;
    }
    std::cout << "*********************" << std::endl;
    try
    {
        // unsigned int index = easyfind(numbers, -1);
        // unsigned int index = easyfind(numbers, 2);
        unsigned int index = easyfind(numbers, 24);
        // unsigned int index = easyfind(numbers, 25);
        std::cout << index << " -> " << numbers[index] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}