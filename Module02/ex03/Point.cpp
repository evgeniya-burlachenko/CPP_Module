/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:27:47 by skelly            #+#    #+#             */
/*   Updated: 2022/02/01 16:13:33 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{

}

Point::~Point()
{
	
}

Point::Point(const Point &fixed) : x(fixed.x), y(fixed.y)
{
	
}

Point::Point( float a,  float b) : x(a), y(b)
{
	
}
	
Point& Point:: operator=(const Point &fixed)
{
	if (this == &fixed)
	 	return (*this);	
	new (this) Point(fixed);
	return (*this);
}

Fixed Point::getX() const
{
	return(this->x);
}

Fixed Point::getY() const
{
	return(this->y);
}	