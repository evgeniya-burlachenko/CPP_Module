/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:15:14 by skelly            #+#    #+#             */
/*   Updated: 2022/02/10 13:03:20 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point_value(0)
{
	std::cout << "Default constructor called "  << std::endl;

}
Fixed::~Fixed()
{
	std::cout << "Destructor called "  <<  std::endl;
}
//конструктор копирования (принимаю по константной ссылке)
Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called "  <<  std::endl;
	*this = fixed;
}
//ф-ция перегрузки операций присваивания
const Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called "  <<  std::endl;
	this->fixed_point_value = fixed.getRawBits();
	//возвращаю адрес на константынй обьект, которому выполнила присваивание
	return *this;
}

int Fixed::getRawBits(void) const
{
	return(this->fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point_value = raw;
	
}
Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called "  <<  std::endl;
	this->fixed_point_value = value << this->fractional_bits;//*256 смещение налево на 8 битов
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called "  <<  std::endl;
	//число смещенное на 8 бит -это 256 1*(2^8)is 256.
	this->fixed_point_value = roundf( value * (1 << fractional_bits));
	//this->fixed_point_value = roundf( value * pow(2, this->fractional_bits));
}

float Fixed::toFloat(void) const
{
	return(this->fixed_point_value / float(1 << fractional_bits));
}

int Fixed::toInt(void) const
{
	return (this->fixed_point_value >> fractional_bits);
}
//overload - переопределение какого-то метода
std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
	// std::cout << "assignment operator << ";
	out << fixed.toFloat();

	//перенаправляю в стандартное определение
	return (out);
}
// 1      = 00000000 00000000 00000000 00000001 = 1
// 1 << 1 = 00000000 00000000 00000000 00000010 = 2
// 1 << 8 = 00000000 00000000 00000001 00000000 = 256