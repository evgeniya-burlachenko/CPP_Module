/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:27:59 by skelly            #+#    #+#             */
/*   Updated: 2022/02/10 20:24:52 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

//наследник
//благодар virtual родитель наследуется 1 раз
class ScavTrap : virtual public ClapTrap
{
	public: 
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string Name);
		ScavTrap(const ScavTrap &fixed);
		ScavTrap& operator=(const ScavTrap &fixed);
		
		void attack(const std::string &target);
		void guardGate();

};



#endif