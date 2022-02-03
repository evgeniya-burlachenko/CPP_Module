/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:11:05 by skelly            #+#    #+#             */
/*   Updated: 2022/02/02 00:13:27 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	static	const int fractional_bits = 8;
	int		fixed_point_value;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &fixed);
		Fixed(const int value);//принимает параметром int
		Fixed(const float value);// принимает параметром float
		const Fixed& operator=(const Fixed &fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;//fix point -> float:
		int toInt(void) const;//fix point -> int:
};

//Перегрузка оператора вставки (<<), который вставляет представление числа с плавающей запятой
//с фиксированной запятой в объект выходного потока, передаваемый в качестве параметра.
std::ostream& operator<<(std::ostream &out, const Fixed &fixed);


#endif
