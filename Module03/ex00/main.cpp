/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:28:02 by skelly            #+#    #+#             */
/*   Updated: 2022/02/10 23:51:53 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
	ClapTrap	a;
	ClapTrap	b("A");
	ClapTrap	c("B");
	ClapTrap	d(b);
	ClapTrap	*e = new ClapTrap("C");

	a = c;

	a.attack("object");//a = B инициализировано 0
	d.takeDamage(3);//A получил урон на 3 (10 - 3 > 0)
	c.takeDamage(15);//B умер (10 - 15 < 0)
	d.beRepaired(5);// A подлечился на 5 поинтов Hit_points + 5
	e->takeDamage(1);
	e->beRepaired(4);
	delete e;
}
