/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:27:59 by skelly            #+#    #+#             */
/*   Updated: 2022/02/10 21:30:23 by skelly           ###   ########.fr       */
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

		int get_Hit_points() const;
		int get_Energy_points() const;
		int get_Attack_damage() const;
		std::string get_Name(void) const;

		void set_Hit_points(unsigned int const amount);
		void set_Energy_points(unsigned int const amount);
		void set_Attack_damage(unsigned int const amount);
		void set_Name(std::string const string);
};

#endif