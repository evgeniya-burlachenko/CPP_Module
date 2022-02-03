/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:39:34 by skelly            #+#    #+#             */
/*   Updated: 2022/02/03 22:14:01 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->set_type("Cat");
	std::cout << "[Cat] : default constructor" << std::endl;
}

 Cat::~Cat()
 {
	std::cout << "[Cat] : destructor" << std::endl;
 }
Cat::Cat(const Cat &Cat) : Animal()
{
	this->set_type(Cat.getType());
	std::cout << "[Cat] : copy constructor" << std::endl;
}

Cat  &Cat::operator=(const Cat &Cat)
{
	this->set_type(Cat.getType());
	return *this;
}
void Cat:: makeSound() const
{
	std::cout << "Meow, meow" << std::endl;
}

	// virtual std::string get_type(void) const;
	// void set_type(std::string string);