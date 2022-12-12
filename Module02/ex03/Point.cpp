/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:03:52 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/12 12:42:24 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x (0), y (0) {}

Point::~Point() {}

Point::Point(const float x, const float y) : x (x), y (y) {}

Point::Point(const Point &point)
{
    *this = point;
}

Point   &Point::operator= (const Point& point)
{
    this->x = point.x;
    this->y = point.y;
    return *this;
}

Fixed   abs(Fixed f)
{
    if (f < 0)
    {
        int rawBits = f.getRawBits();
        rawBits *= -1;
        f.setRawBits(rawBits);
    }
    return (f);
}

Fixed   area( Point a, Point b, Point c)
{
    return
    (
        abs
        (
            ((a.getX() * (b.getY() - c.getY())) \
            + (b.getX() * (c.getY() - a.getY())) \
            + (c.getX() * (a.getY() - b.getY()))) \
            / 2.0f
        )
    );
}

bool    bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed   A = area(a, b, c);
    Fixed   A1 = area(a, b, point);
    if (A1 == 0)
        return false;
    Fixed   A2 = area(a, c, point);
    if (A2 == 0)
        return false;
    Fixed   A3 = area(b, c, point);
    if (A3 == 0)
        return false;

    return A1 + A2 + A3 == A;
}

Fixed   Point::getX()
{
    return x;
}

Fixed   Point::getY()
{
    return y;
}

void    Point::setX(Fixed const x)
{
    this->x = x;
}

void    Point::setY(Fixed const y)
{
    this->y = y;
}
