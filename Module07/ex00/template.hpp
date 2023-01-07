/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:26:41 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/07 20:35:01 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>


template <typename T>
void   swap(T &a, T &b)
{
    T   tmp = a;

    a = b;
    b = tmp;
}

template <typename T>
T   min(T &a, T &b)
{
    return (a < b) ? a : b;
}

template <typename T>
T   max(T &a, T &b)
{
    return (a > b) ? a : b;
}



#endif