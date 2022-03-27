/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:55:04 by skelly            #+#    #+#             */
/*   Updated: 2022/02/15 23:55:22 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() { }

AMateria::~AMateria() { }

AMateria::AMateria(const AMateria & ins) { this->_type = ins._type; }

AMateria::AMateria(std::string const & type) { this->_type = type; }

const AMateria &AMateria::operator=(const AMateria& ins)
{
	this->_type = ins._type;
	return(*this);
}

std::string const & AMateria::getType() const { return(this->_type); }

void AMateria::use(ICharacter& target) { (void)target;}
