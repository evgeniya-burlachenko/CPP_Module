/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:55:04 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:32:01 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria() { this->_type = "cure"; }

Cure::~Cure() { }

Cure::Cure(const Cure& ins) { this->_type = ins._type; }

const Cure &Cure::operator=(const Cure& ins)
{
	this->_type = ins._type;
	return(*this);
}

AMateria* Cure :: clone() const
{
	Cure* clone = new Cure (*this);
	return(clone);

}

void Cure::use(ICharacter& target) { std::cout << "* heals " << target.getName() << "'s wounds" << " *" << std::endl; }
