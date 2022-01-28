/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:15:14 by skelly            #+#    #+#             */
/*   Updated: 2022/01/26 01:08:24 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
//конструктор копирования (принимаю по константной ссылке)
Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called"  << std::endl;
	*this = fixed;
}
//ф-ция перегрузки операций присваивания
Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called"  << std::endl;
	this->fixed_point_value = fixed.getRawBits();
	//возвращаю адрес на константынй обьект, которому выполнила присваивание
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" <<this << std::endl;
	return(this->fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point_value = raw;
	
}
Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called"  << std::endl;
	this->fixed_point_value = value << fractional_bits;//*256 смещение налево на 8 битов
}

Fixed::Fixed(const float value)
{
	int a;
	
	std::cout << "Float constructor called" << std::endl;
	//сдвиг битового шаблона числа вправо на 1 бит всегда делит число на 2. 
	//Точно так же сдвиг числа влево на 1 бит умножает число на 2.
	a = 1 << fractional_bits;
	this->fixed_point_value = roundf( value * a);
}

float Fixed::toFloat(void) const
{
	// float a;

	// a = 1 << fractional_bits;
	return(this->fixed_point_value / float(1 << fractional_bits));
}

int Fixed::toInt(void) const
{
	return (this->fixed_point_value >> fractional_bits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
