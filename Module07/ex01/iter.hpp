/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:26:41 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/07 21:20:56 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>
#include <string>


template <typename T>
void   print(T &e)
{
    std::cout << "  " << e << std::endl;
}

template <typename T>
void   iter(T *p, size_t size, void (*func)(T&))
{
    for (size_t i = 0; i < size; i++)
        func(p[i]);
}




#endif