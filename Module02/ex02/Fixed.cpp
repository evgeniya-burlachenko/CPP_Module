/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:15:14 by skelly            #+#    #+#             */
/*   Updated: 2022/02/10 13:43:46 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point_value(0)
{
	
}

Fixed::~Fixed()
{
	
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	this->fixed_point_value = fixed.getRawBits();
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
	this->fixed_point_value = value << fractional_bits;
}

Fixed::Fixed(const float value)
{
	this->fixed_point_value = roundf( value * (1 << fractional_bits));
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
bool Fixed::operator>(const Fixed &fixed) const
{
	if (this->fixed_point_value> fixed.getRawBits())
		return(true);
	return(false);
}

bool Fixed::operator<(const Fixed &fixed) const
{
	if(this->fixed_point_value < fixed.getRawBits())
		return(true);
	return(false);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	if (this->fixed_point_value >= fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	if (this->fixed_point_value <= fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed &fixed) const
{
	if(this->fixed_point_value == fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &fixed) const
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
	
	res.setRawBits((((long)this->fixed_point_value * (long)fixed.fixed_point_value) >> fractional_bits));//направо
	return(res);
	
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	Fixed res;
	
	res.setRawBits(((float) this->fixed_point_value / fixed.fixed_point_value) * (1  << fractional_bits));//налево
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

const Fixed &Fixed::min(const Fixed  &a,const Fixed  &b)
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

const Fixed &Fixed::max(const Fixed &a, const  Fixed  &b)
{
	if (a > b)
		return(a);
	return(b);
}
