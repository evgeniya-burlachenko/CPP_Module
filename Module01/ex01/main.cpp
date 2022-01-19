/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:36:45 by skelly            #+#    #+#             */
/*   Updated: 2022/01/19 23:09:04 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie *horde;
	
	horde = zombieHorde(10, "ZZOOMMBBIIEE");
	for(int i = 0; i < 10; i++)
		horde[i].announce();
	delete[] horde;
}