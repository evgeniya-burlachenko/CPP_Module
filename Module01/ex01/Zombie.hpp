/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:16:45 by skelly            #+#    #+#             */
/*   Updated: 2022/01/26 20:46:38 by skelly           ###   ########.fr       */
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
		void	set_name(std::string str);
	//	void	announce(std::string str);
};

Zombie* zombieHorde( int N, std::string name );
#endif
