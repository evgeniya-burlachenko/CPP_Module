/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:11:05 by skelly            #+#    #+#             */
/*   Updated: 2022/02/01 15:45:05 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	const Fixed x;
	const Fixed y;
	
	public:
		Point();
		~Point();
		Point(const Point &fixed);
		Point( float a,  float b);
		Point& operator=(const Point &fixed);
		Fixed getX() const;
		Fixed getY() const;	
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
