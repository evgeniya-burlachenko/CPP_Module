/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:39:34 by skelly            #+#    #+#             */
/*   Updated: 2022/02/15 23:13:06 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() 
{
	this->set_type("Dog");
	std::cout << "[Dog] : default constructor" << std::endl;
}

Dog::~Dog() { std::cout << "[Dog] : destructor" << std::endl; }
 
Dog::Dog(const Dog &Dog) 
{
	this->set_type(Dog.getType());
	std::cout << "[Dog] : copy constructor" << std::endl;
}

Dog  &Dog::operator=(const Dog &Dog)
{
	this->set_type(Dog.getType());
	return *this;
}

void Dog:: makeSound() const { std::cout << "Meow, meow" << std::endl; }
