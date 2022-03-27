/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 23:16:58 by skelly            #+#    #+#             */
/*   Updated: 2022/02/08 17:22:07 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max(a, b) << std::endl;

	Fixed c = 5.25f;
	Fixed d = 1.56f;
	std::cout << "----------------------------" << std::endl;
	std::cout << c + d << std::endl;
	std::cout << c - d << std::endl;
	std::cout << c / d << std::endl;
	std::cout << (c < d) << std::endl;
	std::cout << (c > d ) << std::endl;
	std::cout << (c <= d) << std::endl;
	std::cout << (c >= d) << std::endl;
	std::cout << (c == d) << std::endl;
	std::cout << (c != d) << std::endl;

	
	
	return 0;
}