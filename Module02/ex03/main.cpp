/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 23:16:58 by skelly            #+#    #+#             */
/*   Updated: 2022/02/01 17:16:03 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void) 
{
    Point 	a(-1.42, -1.21);
    Point 	b(1.6, -1.36);
    Point 	c(0.05, 1.12);
	Point	point_1(0.21, -0.42);
	Point	point_2(2.4, 4.2);
	Point	point_3(-1.42, -1.21);
	Point	point_4(0.09, -1.285);

	if (bsp (a , b, c, point_1) != 0 )
   		std::cout << "point_1 in a triangle" << std::endl;
	else
		std::cout << "point_1 Out of a triangle" << std::endl;
	if (bsp (a , b, c, point_2) != 0 )
   		std::cout << "point_2 In a triangle" << std::endl;
	else
		std::cout << "point_2 out of a triangle" << std::endl;
	if (bsp (a , b, c, point_3) != 0 )
   		std::cout << "point_3 In a triangle" << std::endl;
	else
		std::cout << "point_3 out of a triangle" << std::endl;
	if (bsp (a , b, c, point_4) != 0 )
   		std::cout << "point_4 in a triangle" << std::endl;
	else
		std::cout << "point_4 out of a triangle" << std::endl;
	
	
    // std::cout << "Out of a triangle"<< bsp (a , b, c, point_2) << std::endl;
    // std::cout << "In a vertex"<< bsp (a , b, c, point_3) << std::endl;
	//  std::cout << "On the edge"<< bsp (a , b, c, point_4) << std::endl;

}