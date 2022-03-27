/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:39:34 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:40:30 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->set_type("Cat");
	this->_brain = new Brain();
	std::cout << "[Cat] : default constructor" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "[Cat] : destructor" << std::endl;
}

Cat::Cat(const Cat &ins) : Animal()
{
	this->_type = ins._type;
	this->_brain = new Brain(*(ins._brain));
	std::cout << "[Cat] : copy constructor" << std::endl;	
}

const Cat  &Cat::operator=(const Cat &ins)
{
	this->_type = ins._type;
	delete this->_brain;
	this->_brain = new Brain(*(ins._brain));
	return *this;
}

void Cat:: makeSound() const { std::cout << "Meow, meow" << std::endl; }

Brain*  Cat::get_Brain() const { return (this -> _brain); }

void    Cat::set_Brain(Brain *Brain) { this -> _brain = Brain; }
