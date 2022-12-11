/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:01:48 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/11 16:06:10 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed   x;
        Fixed   y;
    public:
        Point();
        ~Point();
        Point(const Point &point);
        Point(const float x, const float y);

        Point   &operator= (const Point& p);
        
        Fixed   getX();
        Fixed   getY();
        void    setX(Fixed const x);
        void    setY(Fixed const y);
};

bool    bsp( Point const a, Point const b, Point const c, Point const point);
Fixed   abs(Fixed f);
Fixed   area( Point a, Point b, Point c);

#endif