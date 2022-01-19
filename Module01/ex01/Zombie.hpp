/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:16:45 by skelly            #+#    #+#             */
/*   Updated: 2022/01/19 17:11:24 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	//по умолчанию все поля до директивы public - приватные
	std::string name;
	public:
		Zombie(std::string);//конструктор
		~Zombie(void);//деструктор
		void	announce(void);//ф-ция обьявления имени
	
};

Zombie* newZombie(std::string name);//создание нового зомби на куче
void randomChump(std::string name);
#endif
