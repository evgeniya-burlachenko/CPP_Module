/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:15:14 by skelly            #+#    #+#             */
/*   Updated: 2022/02/03 23:44:41 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
//------------------default constructor------------------------------------------
Fixed::Fixed() : fixed_point_value (0)
{
	std::cout << "Default constructor called"  <<this<< std::endl;
}
//-----------------destructor----------------------------------------------------
Fixed::~Fixed()
{
	std::cout << "Destructor called" << this << std::endl;
}
//---------------конструктор копирования (принимаю по константной ссылке)--------
Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << this << std::endl;
	*this = fixed ;
}
//----------------ф-ция перегрузки операций присваивания--------------------------
Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" <<this << std::endl;
	this->fixed_point_value = fixed.getRawBits();
	//возвращаю адрес на константнынй обьект, которому выполнила присваивание
	return *this;
}
//-----------------------------------------------------------------------------
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" <<this << std::endl;
	return(this->fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point_value = raw;
	
}
