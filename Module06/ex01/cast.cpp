/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:38:12 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/05 10:40:42 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t   serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data        *deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}
