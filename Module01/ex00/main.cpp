/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:35:36 by skelly            #+#    #+#             */
/*   Updated: 2022/02/09 23:55:54 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
//задание по распределению памяти:
//1. на стеке - zombie
//2. на куче - zombie2
//3. на стеке - рандом
int main(void)
{
	Zombie	zombie("Zombie_on_stack");
	zombie.announce();
	
	
	
	Zombie *zombie2 = newZombie("Zombie_on_heap");
	zombie2->announce();
	randomChump("Zombie_randomChump_on_stack");
	delete zombie2; 
	//связка new-delete (аналогично malloc-free)
}

