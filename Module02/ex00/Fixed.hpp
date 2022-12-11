/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:57:26 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/07 13:24:17 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class Fixed
{
    private:
        int value;
        static const int  fractionalBits;
    public:
        Fixed();
        Fixed(const Fixed &a);
        ~Fixed();
        Fixed   &operator= (const Fixed& f);
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};


#endif