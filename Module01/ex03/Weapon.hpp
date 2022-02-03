/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 08:06:55 by skelly            #+#    #+#             */
/*   Updated: 2022/01/28 19:09:58 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//геттеры, сеттеры, инкапсуляция
#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
	std::string _type; //название оружия
	public:
		Weapon(std::string _type);
		Weapon(void);
		~Weapon(void);
		const	std::string &getType(void);//получает значение типа
		void	setType(std::string _type);//присваивает
};

#endif