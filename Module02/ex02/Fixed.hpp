/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:57:26 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/10 12:47:33 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed
{
    private:
        int                 value;
        static const int    fractionalBits;
    public:
        Fixed();
        Fixed(const Fixed &a);
        Fixed(const float f);
        Fixed(int n);
        ~Fixed();

        Fixed               &operator= (const Fixed& f);
        Fixed               operator+(const Fixed& f);
        Fixed               operator-(const Fixed& f);
        Fixed               operator*(const Fixed& f);
        Fixed               operator/(const Fixed& f);
        bool                operator>(const Fixed& f) const;
        bool                operator<(const Fixed& f) const;
        bool                operator>=(const Fixed& f);
        bool                operator<=(const Fixed& f);
        bool                operator==(const Fixed& f);
        bool                operator!=(const Fixed& f);
        Fixed               &operator++(int);
        Fixed               &operator--(int);
        Fixed               operator++();
        Fixed               operator--();

        int                 getRawBits( void ) const;
        void                setRawBits( int const raw );
        float               toFloat( void ) const;
        int                 toInt( void ) const;

        static Fixed        &min(Fixed &a, Fixed &b);
        static const Fixed  &min(const Fixed &a, const Fixed &b);
        static Fixed        &max(Fixed &a, Fixed &b);
        static const Fixed  &max(const Fixed &a, const Fixed &b);
};

std::ostream    &operator<<(std::ostream &os, const Fixed& f);
float           pow(int a, int n);
#endif
