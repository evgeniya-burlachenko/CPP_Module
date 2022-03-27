/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:25:07 by skelly            #+#    #+#             */
/*   Updated: 2022/02/09 18:26:23 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
	Zombie *horde = new Zombie[N];
	
	for(int i = 0; i < N; i++)
		horde[i].set_name(name.append("hi"));
	
	return(horde);
	
}