/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:39:34 by skelly            #+#    #+#             */
/*   Updated: 2022/02/03 22:23:37 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() 
{
	this->set_type("WrongCat");
	std::cout << "[WrongCat] : default constructor" << std::endl;
}

 WrongCat::~WrongCat()
 {
	std::cout << "[WrongCat] : destructor" << std::endl;
 }
WrongCat::WrongCat(const WrongCat &WrongCat)
{
	this->set_type(WrongCat.getType());
	std::cout << "[WrongCat] : copy constructor" << std::endl;
}

WrongCat  &WrongCat::operator=(const WrongCat &WrongCat)
{
	this->set_type(WrongCat.getType());
	return *this;
}
void WrongCat:: makeSound() const
{
	std::cout << "Meow, meow" << std::endl;
}

	// virtual std::string get_type(void) const;
	// void set_type(std::string string);