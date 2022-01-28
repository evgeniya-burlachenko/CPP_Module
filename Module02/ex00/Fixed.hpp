/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:11:05 by skelly            #+#    #+#             */
/*   Updated: 2022/01/28 09:36:53 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
//каноническая форма
class Fixed
{//int float - 4 байта или 32 бита-
//задача - преобразовать числа в числа с фиксированной точкой
//5 - 101 
	
public:
	Fixed(void);
	Fixed(const Fixed &fixed);
	Fixed &operator=(const Fixed &fixed);
	~Fixed(void);
	
	int getRawBits(void) const;
	void setRawBits(int const raw);
private:
	static const int fractional_bits = 8; //мантиса
	int fixed_point_value;
};

#endif
