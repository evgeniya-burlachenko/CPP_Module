/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:39:34 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:00:47 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	this->set_type("Cat");
	this->_brain = new Brain();
	std::cout << "[Cat] : default constructor" << std::endl;
}

Cat::~Cat()
{
	delete this->getBrain();
	std::cout << "[Cat] : destructor" << std::endl;
}
 
Cat::Cat(const Cat &Cat) : AAnimal()
{
	this->set_type(Cat.getType());
	delete this->getBrain();
	this->_brain = new Brain(*(Cat._brain));
	
	std::cout << "[Cat] : copy constructor" << std::endl;	
}

const Cat  &Cat::operator=(const Cat &Cat)
{
	this->set_type(Cat.getType());
	delete this->getBrain();
	this->_brain = new Brain(*(Cat._brain));
	return *this;
}
void Cat:: makeSound() const { std::cout << "Meow, meow" << std::endl; }

Brain* Cat::getBrain() const { return(this->_brain); }

void Cat::setBrain(Brain *Brain) { this->_brain = Brain; }
