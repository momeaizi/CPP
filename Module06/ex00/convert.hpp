/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:35:42 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/06 18:27:17 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <iomanip>

#define TYPE   int

#define NONE   0
#define CHAR   1
#define INT    2
#define FLOAT  3
#define DOUBLE 4

class InvalidInput  : public std::exception
{
    public:
        const char* what() const _NOEXCEPT;
};

void	toInt(const std::string &str, TYPE type);
void	toChar(const std::string &str, TYPE type);
void	toFloat(const std::string &str, TYPE type);
void	toDouble(const std::string &str, TYPE type);
void	convert(const std::string &str);
#endif
