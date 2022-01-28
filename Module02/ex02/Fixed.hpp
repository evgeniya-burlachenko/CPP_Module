/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:11:05 by skelly            #+#    #+#             */
/*   Updated: 2022/01/28 10:16:23 by skelly           ###   ########.fr       */
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
		Fixed(const int value);
		Fixed(const float value);
		
		Fixed& operator=(const Fixed &fixed);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		
		bool operator>(Fixed fixed)const ;
		bool operator<(Fixed fixed)const ;
		bool operator>=( Fixed fixed)const;
		bool operator<=( Fixed fixed)const;
		bool operator==( Fixed fixed)const;
		bool operator!=(Fixed fixed )const;

		Fixed operator+( Fixed fixed)const;
		Fixed operator-( Fixed fixed)const;
		Fixed operator*(Fixed fixed)const ;
		Fixed operator/( Fixed fixed)const;
		
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		
		static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &min(Fixed const &a, Fixed  const &b);
        static const Fixed &max(Fixed  const &a, Fixed const &b);



		
		
};

//Перегрузка оператора вставки (<<), который вставляет представление числа с плавающей запятой
//с фиксированной запятой в объект выходного потока, передаваемый в качестве параметра.
std::ostream& operator<<(std::ostream &out, const Fixed &fixed);


#endif
