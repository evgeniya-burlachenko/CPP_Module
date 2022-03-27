/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:55:04 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:32:14 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria() { this->_type = "ice"; }

Ice::~Ice() { }

Ice::Ice(const Ice& ins) { this->_type = ins._type; }

const Ice &Ice::operator=(const Ice& ins)
{
	this->_type = ins._type;
	return(*this);
}

AMateria* Ice :: clone() const
{
	Ice* clone = new Ice (*this);
	return(clone);

}
void Ice::use(ICharacter& target) { std::cout << "* shoots an Ice bolt at " << target.getName() << " *" << std::endl; }
