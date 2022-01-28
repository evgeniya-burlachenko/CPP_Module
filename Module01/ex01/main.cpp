/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:36:45 by skelly            #+#    #+#             */
/*   Updated: 2022/01/26 20:48:16 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
//создание множества обьектов класса
int main (void)
{
	Zombie *horde;
	
	horde = zombieHorde(10, "ZZOOMMBBIIEE");
	for(int i = 0; i < 10; i++)
		horde[i].announce();
	delete[] horde;
}