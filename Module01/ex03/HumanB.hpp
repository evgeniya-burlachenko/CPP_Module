/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:39:08 by skelly            #+#    #+#             */
/*   Updated: 2022/01/26 21:33:07 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	std::string _name;
	Weapon *weapon;//оружие через указатель
	public:
		HumanB(std::string name);
		HumanB(void);
		~HumanB(void);
		//методы:
		void	attack(void);
		void	setWeapon(Weapon &weapon);
		
};

#endif