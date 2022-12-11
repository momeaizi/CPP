/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:03:58 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/10 12:47:20 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int    Fixed::fractionalBits = 8;

Fixed::Fixed() : value (0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &f) : value (0)
{
    std::cout << "Copy constructor called\n";
    *this = f;
}

Fixed::Fixed(const int n) : value (n << fractionalBits)
{
    std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float f) : value (roundf(f * pow(2, fractionalBits)))
{
    std::cout << "Float constructor called\n";
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

int Fixed::toInt( void ) const
{
    return value >> fractionalBits;
}

float   Fixed::toFloat( void ) const
{
    return value / pow(2, fractionalBits);
}

Fixed   &Fixed::operator= (const Fixed& f)
{
    std::cout << "Copy assignment operator called\n";
    this->value = f.value;
    return *this;
}

std::ostream    &operator<<(std::ostream &os, const Fixed& f)
{
    os << f.toFloat();
    return os;
}

Fixed    Fixed::operator+(const Fixed& f)
{
    Fixed f1;
    int value = this->value + f.value;
    f1.value = value;
    return f1;
}

Fixed    Fixed::operator-(const Fixed& f)
{
    Fixed f1;
    int value = this->value - f.value;
    f1.value = value;
    return f1;
}

Fixed    Fixed::operator*(const Fixed& f)
{
    Fixed f1;
    int value = this->value * f.value;
    f1.value = value >> fractionalBits;
    return f1;
}

Fixed    Fixed::operator/(const Fixed& f)
{
    int value = this->value / f.value;
    Fixed f1( value );
    return f1;
}

bool    Fixed::operator>(const Fixed& f) const
{
    return this->value > f.value;
}

bool    Fixed::operator<(const Fixed& f) const
{
    return this->value < f.value;
}

bool    Fixed::operator>=(const Fixed& f)
{
    return this->value >= f.value;
}

bool    Fixed::operator<=(const Fixed& f)
{
    return this->value <= f.value;
}

bool    Fixed::operator==(const Fixed& f)
{
    return this->value == f.value;
}

bool    Fixed::operator!=(const Fixed& f)
{
    return this->value != f.value;
}

Fixed   &Fixed::operator++(int)
{
    this->value += 1;
    return *this;
}

Fixed   &Fixed::operator--(int)
{
    this->value -= 1;
    return *this;
}

Fixed   Fixed::operator++()
{
    Fixed   original = *this;
    this->value += 1;
    return original;
}

Fixed   Fixed::operator--()
{
    Fixed   original = *this;
    this->value -= 1;
    return original;
}

Fixed        &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

const Fixed  &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed        &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed  &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

float pow(int a, int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
        res *= a;
    return res;
}