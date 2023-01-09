/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:50:53 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/08 18:48:15 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm> 
#include <exception>

class NoOccurrenceFound : public std::exception
{
    public:
        const char* what() const throw();
};


template <typename T>
unsigned int    easyfind( T &c, int e)
{
    typename T::iterator it;

    it = std::find(c.begin(), c.end(), e);
    if (it == c.end())
        throw NoOccurrenceFound();
    return it - c.begin();
}


#endif