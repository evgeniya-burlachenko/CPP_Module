/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:39:34 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:01:15 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	this->set_type("Dog");
	this->_brain = new Brain();
	std::cout << "[Dog] : default constructor" << std::endl;
}

 Dog::~Dog()
 {
	delete this->getBrain();
	std::cout << "[Dog] : destructor" << std::endl;
 }
 
Dog::Dog(const Dog &Dog) : AAnimal()
{
	this->set_type(Dog.getType());
	delete this->getBrain();
	this->_brain = new Brain(*(Dog._brain));
	std::cout << "[Dog] : copy constructor" << std::endl;
}

const Dog  &Dog::operator=(const Dog &Dog)
{
	this->set_type(Dog.getType());
	delete this->getBrain();
	this->_brain = new Brain(*(Dog._brain));
	return *this;
}
void Dog:: makeSound() const { std::cout << "Woof, woof" << std::endl; }

Brain* Dog::getBrain() const { return(this->_brain); }

void Dog::setBrain(Brain *Brain) { this->_brain = Brain; }
	