/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:27:59 by skelly            #+#    #+#             */
/*   Updated: 2022/02/03 17:42:50 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

//наследник
class FragTrap : public virtual ClapTrap
{
	public: 
		FragTrap();
		~FragTrap();
		FragTrap(std::string Name);
		FragTrap(const FragTrap &fixed);
		FragTrap& operator=(const FragTrap &fixed);
		
		// void attack(const std::string &target);
		void highFivesGuys(void);

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