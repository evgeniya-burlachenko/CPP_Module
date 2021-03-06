/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:28:02 by skelly            #+#    #+#             */
/*   Updated: 2022/02/03 17:40:36 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main ()
{
	ClapTrap	a_clap;
	ClapTrap	b_clap("A");
	ScavTrap	a_scav;
	ScavTrap	b_scav("C");
	FragTrap	a_flag;
	FragTrap	b_flag("B");
	FragTrap	c_flag(a_flag);

	a_flag = b_flag;
	
	a_scav = b_scav;

std::cout << std::endl;
b_clap.attack("object");
a_scav.attack("object");
a_flag.attack("object");

std::cout << std::endl;
b_clap.takeDamage(9);
a_scav.takeDamage(9);
a_flag.takeDamage(9);

std::cout << std::endl;
b_clap.beRepaired(1);
a_scav.beRepaired(1);
a_flag.beRepaired(1);

std::cout << std::endl;
a_flag.highFivesGuys();
std::cout << std::endl;

}