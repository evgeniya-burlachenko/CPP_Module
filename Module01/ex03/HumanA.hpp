/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:39:08 by skelly            #+#    #+#             */
/*   Updated: 2022/01/27 00:57:51 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	std::string _name;
	Weapon &weapon;//оружие через ссылку
	public:
		HumanA(std::string name, Weapon &weapon);

		~HumanA(void);
		void	attack(void);	
};

#endif