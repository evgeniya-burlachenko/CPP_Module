/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:39:34 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:34:11 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->set_type("Dog");
	this->_brain = new Brain();
	std::cout << "[Dog] : default constructor" << std::endl;
}

 Dog::~Dog()
 {
	delete this->_brain;
	std::cout << "[Dog] : destructor" << std::endl;
 }
 
Dog::Dog(const Dog &Dog) : Animal()
{
	this->_type = Dog._type;
	this->_brain = new Brain(*(Dog._brain));
	std::cout << "[Dog] : copy constructor" << std::endl;
}

const Dog  &Dog::operator=(const Dog &Dog)
{
	this->_type = Dog._type;
	delete this->_brain;
	this->_brain = new Brain(*(Dog._brain));
	return *this;
}
void Dog:: makeSound() const { std::cout << "Woof, woof" << std::endl; }

Brain*  Dog::get_Brain() const {return (this -> _brain); }

void    Dog::set_Brain(Brain *Brain) { this -> _brain = Brain; }
