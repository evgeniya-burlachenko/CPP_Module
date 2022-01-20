/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 08:06:55 by skelly            #+#    #+#             */
/*   Updated: 2022/01/20 12:21:45 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
	std::string type; //название оружия
	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);
		const	std::string &getType(void);//получает значение типа
		void	setType(std::string type);//присваивает
};

#endif