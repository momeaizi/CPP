/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:37:00 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/07 09:32:28 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

const char	*InvalidInput::what() const _NOEXCEPT
{
	return "Invalid input";
}

void	toInt(const std::string &str, TYPE type)
{
	int	i;


	if (type == CHAR)
		i = static_cast<int>(str[0]);
	else if (type == FLOAT)
		i = static_cast<int>(stof(str));
	else if (type == DOUBLE)
		i = static_cast<int>(stod(str));
	else
		i = stoi(str);

	std::cout << "int: " << i << std::endl;
}

void	toChar(const std::string &str, TYPE type)
{
	char	c = str[0];


	if (type == FLOAT)
		c = static_cast<char>(stof(str));
	else if (type == DOUBLE)
		c = static_cast<char>(stod(str));
	else if (type == INT)
		c = static_cast<char>(stoi(str));

	std::cout << "char: ";
	if (c >= 32 && c <= 126)
		std::cout << c << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	toFloat(const std::string &str, TYPE type)
{
	float	f;

	if (type == CHAR)
		f = static_cast<float>(str[0]);
	else if (type == DOUBLE)
		f = static_cast<float>(stod(str));
	else if (type == INT)
		f = static_cast<float>(stoi(str));
	else
		f = stof(str);

	std::cout << "float: " << f << "f" << std::endl;
}

void	toDouble(const std::string &str, TYPE type)
{
	double	d;

	if (type == CHAR)
		d = static_cast<double>(str[0]);
	else if (type == FLOAT)
		d = static_cast<double>(stof(str));
	else if (type == INT)
		d = static_cast<double>(stoi(str));
	else
		d = stod(str);
	std::cout << "double: " << d << std::endl;
}


TYPE	getType(const std::string &str)
{
	size_t	i = 0;
	TYPE	type = CHAR;

	if (str[i] == '-' || str.length() == 1)
		i = 1;

	for (; i < str.length(); i++)
	{
		if (str[i] == 'f' && i + 1 == str.length() && type == DOUBLE && i > 1)
			type = FLOAT;
		else if (str[i] == '.' && type != DOUBLE)
			type = DOUBLE;
		else if (!isdigit(str[i]))
			throw InvalidInput();
	}
	if (type == CHAR && i > 1)
		type = INT;
	return type;
}

TYPE	isKeyword(const std::string &str)
{
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return FLOAT;
	if (str == "-inf" || str == "+inf" || str == "nan")
		return DOUBLE;
	return NONE;
}

void	convert(const std::string &str)
{
	try
	{
		int	type = isKeyword(str);

		if (type != NONE)
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			toFloat(str, type);
			toDouble(str, type);
			return ;
		}
		
		type = getType(str);

		toChar(str, type);
		toInt(str, type);
		toFloat(str, type);
		toDouble(str, type);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
