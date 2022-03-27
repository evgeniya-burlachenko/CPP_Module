/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:28:02 by skelly            #+#    #+#             */
/*   Updated: 2022/02/10 17:38:04 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

// Ромбовидное наследование (англ. diamond inheritance) — 
// ситуация в объектно-ориентированных языках программирования 
// с поддержкой множественного наследования, 
// когда два класса B и C наследуют от A , 
// а класс D наследует от обоих классов B и C .
int main ()
{
	//ClapTrap	c1;
	DiamondTrap d1("Diamond");
	DiamondTrap d2(d1);

	std::cout << std::endl;
	d1.attack("person");
	std::cout << std::endl;

	d1.whoAmI();
	std::cout << std::endl;

	d1.highFivesGuys();
	std::cout << std::endl;

	d1.guardGate();
	std::cout << std::endl;

	d1.takeDamage(2);
	std::cout << std::endl;

	d1.beRepaired(1);
	std::cout << std::endl;


}