/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:15:26 by skelly            #+#    #+#             */
/*   Updated: 2022/01/20 12:33:10 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon()
{
	
}

Weapon::~Weapon()
{
	
}
const	std::string &Weapon::getType(void)
{
	return(this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}