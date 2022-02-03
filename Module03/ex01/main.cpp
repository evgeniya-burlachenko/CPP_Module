/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:28:02 by skelly            #+#    #+#             */
/*   Updated: 2022/02/03 13:38:29 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
	ClapTrap	a_clap;
	ClapTrap	b_clap("A");
	ScavTrap	a_scav;
	ScavTrap	b_scav("B");
	ScavTrap	c_scav(a_scav);

	a_scav = b_scav;

std::cout << std::endl;
b_clap.attack("object");
a_scav.attack("object");

std::cout << std::endl;
b_clap.takeDamage(9);
a_scav.takeDamage(9);

std::cout << std::endl;
b_clap.beRepaired(1);
a_scav.beRepaired(1);

std::cout << std::endl;
c_scav.guardGate();
std::cout << std::endl;

}