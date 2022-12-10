/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:03:52 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/10 13:11:18 by momeaizi         ###   ########.fr       */
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
    std::cout << "Copy assignment operator called\n";
    this->x = point.x;
    this->y = point.y;
    return *this;
}
