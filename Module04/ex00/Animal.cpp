/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:05:33 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:04:48 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

	Animal::Animal(): _type("animal") { std::cout << "[Animal] : default constructor" << std::endl;}
	
	Animal::~Animal() {std::cout << "[Animal] : destructor" << std::endl;}
	
	Animal::Animal(const Animal &Animal)
	{
		std::cout << "[Animal] : copy constructor" << std::endl;
		this->set_type(Animal.getType());
		
	}
	Animal &Animal::operator=(const Animal &Animal)
	{
		this->set_type(Animal.getType());
		return *this;
	}
	
	void Animal::makeSound()const { std::cout << "no sound" << std::endl;}
	
	std::string Animal:: getType(void) const { return(this->_type);}
	
	void Animal::set_type(std::string string) { this->_type = string;}