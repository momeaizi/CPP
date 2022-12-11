/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:57:26 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/08 15:52:09 by momeaizi         ###   ########.fr       */
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
        Fixed   &operator= (const Fixed& f);
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream    &operator<<(std::ostream &os, const Fixed& f);

#endif