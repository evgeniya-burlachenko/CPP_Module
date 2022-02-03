/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:27:59 by skelly            #+#    #+#             */
/*   Updated: 2022/02/03 17:40:36 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
//#include "ClapTrap.hpp"

//наследник
class DiamondTrap :  virtual public ScavTrap, virtual public FragTrap
{
	std::string _name;
	public: 
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string Name);
		DiamondTrap(const DiamondTrap &fixed);
		DiamondTrap& operator=(const DiamondTrap &fixed);
		
		void attack(const std::string &target);
		void whoAmI( void );

		// int get_Hit_points();
		// int get_Energy_points();
		// int get_Attack_damage();
		std::string	get_Name(void);

		// void set_Hit_points(unsigned int amount);
		// void set_Energy_points(unsigned int amount);
		// void set_Attack_damage(unsigned int amount);
		void set_Name(std::string string);

};



#endif