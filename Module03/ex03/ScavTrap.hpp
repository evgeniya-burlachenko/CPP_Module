/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:27:59 by skelly            #+#    #+#             */
/*   Updated: 2022/02/03 17:45:25 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

//наследник
class ScavTrap : public virtual ClapTrap
{
	public: 
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string Name);
		ScavTrap(const ScavTrap &fixed);
		ScavTrap& operator=(const ScavTrap &fixed);
		
		void attack(const std::string &target);
		void guardGate();

		// int get_Hit_points();
		// int get_Energy_points();
		// int get_Attack_damage();
		// std::string	get_Name(void);

		// void set_Hit_points(unsigned int amount);
		// void set_Energy_points(unsigned int amount);
		// void set_Attack_damage(unsigned int amount);
		// void set_Name(std::string string);

};



#endif