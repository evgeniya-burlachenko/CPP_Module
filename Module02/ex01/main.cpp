/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:23:08 by skelly            #+#    #+#             */
/*   Updated: 2022/02/10 12:53:02 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(10);// в -> fixed point
	Fixed const c(42.42f);
	Fixed const d(b);
	
	a = Fixed(1234.4321f);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "a is " << a.toFloat() << " as integer" << std::endl;
	return 0;
}

//Accuracy and precision
//Для преобразования с плавающей запятой в фиксированную:

// Вычислить x = float_input * 2^(fractional_bits)
// Округлите x до прибытия числа
// Сохраните округленный x в целочисленном контейнере
// 2^(fractional_bits)==1 << fractional_bits
//Преобразование из устойчивого в плавающее происходит наоборот: 
//(float)fixed_number / (float)(1 << fractional_bits)