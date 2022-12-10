/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:57:08 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/10 12:47:59 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iomanip>

#include <iostream>
int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    
    std::cout << " -> " <<  a << std::endl;
    std::cout << " -> " <<  ++a << std::endl;
    std::cout << " -> " <<  a << std::endl;
    std::cout << " -> " <<  a++ << std::endl;
    std::cout << " -> " <<  a << std::endl;
    std::cout << " -> " <<  b << std::endl;
    std::cout << " -> " <<  Fixed::max( a, b ) << std::endl;
    return 0;
}