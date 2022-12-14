/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:57:08 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/11 16:12:48 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iomanip>

#include <iostream>
int main( void ) {
    
    Point a = Point(0, 5);
    Point c = Point(0, 0);
    Point b = Point(7, 5);

    
    Point p = Point(-0.01f, 0.01f);

    std::cout << bsp(a, b, c, p) << std::endl;

    
    return 0;
}