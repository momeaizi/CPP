/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:54:10 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/19 19:54:32 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    private:
        int                 value;
        static const int    fractionalBits;
    public:
        Fixed();
        Fixed(Fixed const &a);
        Fixed(float const f);
        Fixed(int const n);
        ~Fixed();
        
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
        
        Fixed   &operator= (const Fixed& f);
};
