/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:11:05 by skelly            #+#    #+#             */
/*   Updated: 2022/02/09 20:29:27 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{//int float - 4 байта или 32 бита-
//задача - преобразовать числа в числа с фиксированной точкой
static const int fractional_bits = 8; //мантиса
int fixed_point_value;

public:
	Fixed();
	Fixed(const Fixed &fixed);//конструктор копирования
	Fixed &operator=(const Fixed &fixed);//перезагрузка оператора присваиания
	//благодаря перегрузке операторов мы можем выполнять со своими классами 
	//те же операции, что и со встроенными типами данных
	~Fixed();
	
	int getRawBits(void) const;//возвращает текущее значение с фикс точкой
	void setRawBits(int const raw);//задает исходное значение с фикс точкой
	
};

#endif
