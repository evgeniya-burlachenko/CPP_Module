/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:56:08 by skelly            #+#    #+#             */
/*   Updated: 2022/01/20 12:51:15 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_b)
{
	this->name = name_b;
}

HumanB::~HumanB(void)
{
	return;
}

void HumanB::attack(void)
{
	std::cout <<this->name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &arms)
{
	this->weapon = &arms;
	
}