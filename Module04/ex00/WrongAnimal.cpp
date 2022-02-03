/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:05:33 by skelly            #+#    #+#             */
/*   Updated: 2022/02/03 22:14:42 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

	WrongAnimal::WrongAnimal()
	{
		this->set_type("wrong_animal");
		std::cout << "[WrongAnimal] : default constructor" << std::endl;
	}
	
	WrongAnimal::~WrongAnimal()
	{
		std::cout << "[WrongAnimal] : destructor" << std::endl;
	}
	
	WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal)
	{
		std::cout << "[WrongAnimal] : copy constructor" << std::endl;
		this->set_type(WrongAnimal.getType());
		
	}
	WrongAnimal &WrongAnimal::operator=(const WrongAnimal &WrongAnimal)
	{
		this->set_type(WrongAnimal.getType());
		return *this;
	}
	
	void WrongAnimal::makeSound()const
	{
		std::cout << "no sound" << std::endl;
	}
	
	std::string WrongAnimal:: getType(void) const
	{
		return(this->type);
	}
	
	void WrongAnimal::set_type(std::string string)
	{
		this->type = string;
		
	}