/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:56:08 by skelly            #+#    #+#             */
/*   Updated: 2022/01/27 00:57:27 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :weapon(weapon) 
//инициализация ссылки!список инициализации
{
	this->_name = name;
}

HumanA::~HumanA(void)
{
	
}

void HumanA::attack(void)
{
	std::cout <<this->_name << " attacks with his " << weapon.getType() << std::endl;
}
