/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:16:45 by skelly            #+#    #+#             */
/*   Updated: 2022/01/19 23:22:08 by skelly           ###   ########.fr       */
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
		Zombie(void);
		~Zombie(void);//деструктор
		void	announce(void);//ф-ция обьявления имени
		void	set_name(std::string str);

};

Zombie* zombieHorde( int N, std::string name );
#endif
