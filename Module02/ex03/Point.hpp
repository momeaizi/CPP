/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:01:48 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/10 13:08:35 by momeaizi         ###   ########.fr       */
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
        Point::Point(const float x, const float y);

        Point   &operator= (const Point& p);
        
        bool    bsp( Point const a, Point const b, Point const c, Point const point);
};

#endif