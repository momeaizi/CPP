/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:03:58 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/12 11:58:27 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int    Fixed::fractionalBits = 8;

Fixed::Fixed() : value (0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called\n";
    *this = f;
}

Fixed   &Fixed::operator= (const Fixed& f)
{
    std::cout << "Copy assignment operator called\n";
    this->value = f.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return value;
}

void    Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called\n";
    this->value = raw;
}
