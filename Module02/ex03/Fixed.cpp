/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:15:14 by skelly            #+#    #+#             */
/*   Updated: 2022/01/28 22:11:51 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixed_point_value = 0;
	return;
}

Fixed::~Fixed()
{
	
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

const Fixed &Fixed::operator=(const Fixed &fixed)
{
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
	//std::cout << "Int constructor called"  <<this<< std::endl;
	this->fixed_point_value = value << fractional_bits;
}

Fixed::Fixed(const float value)
{
	int a;
	
	//std::cout << "Float constructor called"  <<this<< std::endl;
	//сдвиг битового шаблона числа вправо на 1 бит всегда делит число на 2. 
	//Точно так же сдвиг числа влево на 1 бит умножает число на 2.
	a = 1 << fractional_bits;
	this->fixed_point_value = roundf( value * a);
}

float Fixed::toFloat(void) const
{
	return(this->fixed_point_value /float( 1 << fractional_bits));
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
//--------------------- >, <, >=, <=, == and != -----------------------------------------
bool Fixed::operator>(const Fixed &fixed)const 
{
	if (this->fixed_point_value> fixed.getRawBits())
		return(true);
	return(false);
}

bool Fixed::operator<(const Fixed &fixed)const
{
	if(this->fixed_point_value < fixed.getRawBits())
		return(true);
	return(false);
}

bool Fixed::operator>=(const Fixed &fixed)const 
{
	if (this->fixed_point_value >= fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &fixed)const 
{
	if (this->fixed_point_value <= fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed &fixed)const
{
	if(this->fixed_point_value == fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &fixed)const
{
	if(this->fixed_point_value != fixed.getRawBits())
		return (true);
	return (false);
}
//---------------------- +, -, *, / --------------------------------
Fixed Fixed::operator+(const Fixed &fixed )const
{
	Fixed res;
	
	res.setRawBits(this->fixed_point_value + fixed.getRawBits());
	return(res);
	
}

Fixed Fixed::operator-(const Fixed &fixed)const
{
	Fixed res;
	
	res.setRawBits(this->fixed_point_value - fixed.getRawBits());
	return(res);
	
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	Fixed res;
	//long temp;
	
	//temp = ((long)this->fixed_point_value * (long)fixed.getRawBits()) >> fractional_bits;
	res.setRawBits(((long)this->fixed_point_value * (long)fixed.getRawBits()) >> fractional_bits);
	return(res);
	
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	Fixed res;
	long temp;
	//int b;
	
	temp = ((float) this->fixed_point_value / fixed.getRawBits());
	//b = 1  << fractional_bits;
	res.setRawBits(round(temp * (1  << fractional_bits)));
	return(res);
	
}
//--------------------------- ++ -- ---------------------------	
Fixed	&Fixed::operator++()
{
	this->fixed_point_value += 1;
	return(*this);
	
}

Fixed Fixed::operator++(int) //постфиксная запись - int
{
	Fixed temp(*this);

	this->fixed_point_value += 1;
	return(temp);
}
Fixed &Fixed::operator--()
{
	this->fixed_point_value -= 1;
	return(*this);
	
}
Fixed Fixed::operator--(int)//постфиксная запись - int
{
	Fixed temp(*this);

	--(*this);
	return(temp);	
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return(a);
	return(b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return (a);
    return (b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return(a);
	return(b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed  const &b)
{
	if (a > b)
		return(a);
	return(b);
}
