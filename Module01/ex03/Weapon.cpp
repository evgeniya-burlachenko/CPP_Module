/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:15:26 by skelly            #+#    #+#             */
/*   Updated: 2022/02/09 23:37:50 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::Weapon()
{
	
}

Weapon::~Weapon()
{
	
}
const	std::string &Weapon::getType(void)
{
	return(this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}