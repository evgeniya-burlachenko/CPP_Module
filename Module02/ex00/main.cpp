/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:09:34 by skelly            #+#    #+#             */
/*   Updated: 2022/01/26 01:01:21 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;//default
	Fixed b(a);//copy
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	//std::cout << &a << std::endl;
	std::cout << b.getRawBits() << std::endl;
	//std::cout << &b << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << &c << std::endl;
	return 0;
}