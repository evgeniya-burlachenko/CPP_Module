/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:16:45 by skelly            #+#    #+#             */
/*   Updated: 2022/01/28 18:41:48 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	std::string name;
	public://модификатор доступа
		Zombie(std::string);
		Zombie(void);
		~Zombie(void);
		void	announce(void);
};
//создание нового зомби на куче new=malloc:
Zombie* newZombie(std::string name);
//рандом зомби - по факту - на стеке
void randomChump(std::string name);
#endif
