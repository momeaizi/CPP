/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:31:34 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/05 10:46:22 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
    public:
        ~Data() {};

        int     i;
        long    l;
        char    c;
        bool    b;
};


uintptr_t   serialize(Data *ptr);
Data        *deserialize(uintptr_t raw);

#endif