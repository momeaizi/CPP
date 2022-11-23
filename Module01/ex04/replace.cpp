/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:28:12 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/22 18:02:09 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void    replace(std::ifstream &inf, std::ofstream &outf, std::string s1, std::string s2)
{
    std::string buff;
    std::size_t found;

    while (std::getline(inf, buff))
    {
        found = 0;
        while (1)
        {
            found = buff.find(s1, found);
            if (found == std::string::npos)
                break ;
            buff.erase(found, s1.length());
            buff.insert(found, s2);
            found += s2.length();
        }
        outf << buff;
        if (!inf.eof())
            outf << std::endl;
    }
}