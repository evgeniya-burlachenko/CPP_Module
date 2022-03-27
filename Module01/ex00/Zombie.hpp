/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:16:45 by skelly            #+#    #+#             */
/*   Updated: 2022/02/09 23:57:34 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	std::string name;
	public:
		Zombie(std::string);
		Zombie(void);
		~Zombie(void);
		void	announce(void);
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);


#endif
