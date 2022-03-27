/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:05:33 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:33:03 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

	AAnimal::AAnimal(): _type("animal") { std::cout << "[Animal] : default constructor" << std::endl;}
	
	AAnimal::~AAnimal() { std::cout << "[Animal] : destructor" << std::endl; }
	
	AAnimal::AAnimal(const AAnimal &AAnimal)
	{
		std::cout << "[AAnimal] : copy constructor" << std::endl;
		this->set_type(AAnimal.getType());
		
	}
	AAnimal &AAnimal::operator=(const AAnimal &AAnimal)
	{
		this->set_type(AAnimal.getType());
		return *this;
	}
	
	void AAnimal::makeSound()const { std::cout << "no sound" << std::endl; }
	
	std::string AAnimal:: getType(void) const { return(this->_type); }
	
	void AAnimal::set_type(std::string string) { this->_type = string; }
	