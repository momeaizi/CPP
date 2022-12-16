/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:03:58 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/16 10:47:10 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int    Fixed::fractionalBits = 8;

Fixed::Fixed() : value (0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const &f)
{
    std::cout << "Copy constructor called\n";
    *this = f;
}

Fixed::Fixed(int const n) : value (n << fractionalBits)
{
    std::cout << "Int constructor called\n";
}

Fixed::Fixed(float const f) : value (roundf(f * (float)(1 << fractionalBits)))
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
    return value / (float)(1 << fractionalBits);
}

Fixed   &Fixed::operator= (const Fixed& f)
{
    // std::cout << "Copy assignment operator called\n";
    this->value = f.value;
    return *this;
}

std::ostream    &operator<<(std::ostream &os, const Fixed& f)
{
    os << f.toFloat();
    return os;
}

Fixed    Fixed::operator+(const Fixed& f) const
{
    Fixed f1;
    int value = this->value + f.value;
    f1.value = value;
    return f1;
}

Fixed    Fixed::operator-(const Fixed& f) const
{
    Fixed f1;
    int value = this->value - f.value;
    f1.value = value;
    return f1;
}

Fixed    Fixed::operator*(const Fixed& f) const
{
    Fixed f1;
    int value = this->value * f.value;
    f1.value = value >> fractionalBits;
    return f1;
}

Fixed    Fixed::operator/(const Fixed& f) const
{
    Fixed   f1;
    f1.value = (this->value << fractionalBits) / f.value;
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

bool    Fixed::operator>=(const Fixed& f) const
{
    return this->value >= f.value;
}

bool    Fixed::operator<=(const Fixed& f) const
{
    return this->value <= f.value;
}

bool    Fixed::operator==(const Fixed& f) const
{
    return this->value == f.value;
}

bool    Fixed::operator!=(const Fixed& f) const
{
    return this->value != f.value;
}

Fixed   &Fixed::operator++()
{
    this->value++;
    return *this;
}

Fixed   &Fixed::operator--()
{
    this->value--;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed   original = *this;
    this->value++;
    return original;
}

Fixed   Fixed::operator--(int)
{
    Fixed   original = *this;
    this->value--;
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
