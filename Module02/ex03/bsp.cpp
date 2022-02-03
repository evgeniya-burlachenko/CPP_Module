/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:23:46 by skelly            #+#    #+#             */
/*   Updated: 2022/02/01 20:08:20 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed ft_vector(Point const a, Point const b, Point const point)
{
	Fixed a_x = a.getX();
	Fixed a_y = a.getY();
	Fixed b_x = b.getX();
	Fixed b_y = b.getY();
	Fixed point_x = point.getX();
	Fixed point_y = point.getY();

	Fixed res;
	res = (a_x - point_x) * (b_y - a_y) - (b_x - a_x) * (a_y - point_y);
	return(res);
}

// Математическая часть - векторное и псевдоскалярное произведения.
// Реализация - считаются произведения (1, 2, 3 - вершины треугольника, 0 - точка):
// (x1 - x0) * (y2 - y1) - (x2 - x1) * (y1 - y0)
// (x2 - x0) * (y3 - y2) - (x3 - x2) * (y2 - y0)
// (x3 - x0) * (y1 - y3) - (x1 - x3) * (y3 - y0)
//res = (b_x - a_x) * (point_y - a_y) - (b_y - a_y) * (point_x - a_x);
// Если они одинакового знака, то точка внутри треугольника, если что-то из этого - ноль, 
//то точка лежит на стороне, иначе точка вне треугольника.

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed A, B, C;

	A = ft_vector(a, b, point);
	B = ft_vector(b, c, point);
	C = ft_vector(b, c, point);
	
	//если имеют одинаковый знак то true
	if (A > 0 && B > 0 && C > 0)
		return(true);
	else if (A < B && B < 0 && C < 0)
		return(true);
	else	
		return(false);
}

