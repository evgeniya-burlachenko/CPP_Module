/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:27:59 by skelly            #+#    #+#             */
/*   Updated: 2022/02/10 20:45:44 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

//наследник
class FragTrap : virtual public ClapTrap
{
	public: 
		FragTrap();
		~FragTrap();
		FragTrap(std::string Name);
		FragTrap(const FragTrap &fixed);
		FragTrap& operator=(const FragTrap &fixed);

		void highFivesGuys(void);

};



#endif