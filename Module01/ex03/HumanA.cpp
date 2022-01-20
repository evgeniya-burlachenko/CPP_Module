/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:56:08 by skelly            #+#    #+#             */
/*   Updated: 2022/01/20 12:47:22 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :weapon(weapon) //инициализация ссылки!
{
	this->name = name;
}

HumanA::~HumanA(void)
{
	return;
}

void HumanA::attack(void)
{
	std::cout <<this->name << " attacks with his " << weapon.getType() << std::endl;
}
