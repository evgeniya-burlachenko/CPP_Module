/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:27:59 by skelly            #+#    #+#             */
/*   Updated: 2022/02/03 00:43:29 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

// Наследование
class ClapTrap
{
	protected:
		std::string Name;
		int Hit_points;
		int Energy_points;
		int Attack_damage;

	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap &fixed);
		ClapTrap &operator=(const ClapTrap &fixed);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int get_Hit_points();
		int get_Energy_points();
		int get_Attack_damage();
		std::string get_Name(void);

		void set_Hit_points(unsigned int amount);
		void set_Energy_points(unsigned int amount);
		void set_Attack_damage(unsigned int amount);
		void set_Name(std::string string);
};

#endif