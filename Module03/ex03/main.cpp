/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:28:02 by skelly            #+#    #+#             */
/*   Updated: 2022/02/03 17:43:49 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

int main ()
{
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