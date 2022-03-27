/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:27:56 by skelly            #+#    #+#             */
/*   Updated: 2022/02/10 17:35:55 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	set_Name("No Name ");
	set_Hit_points(100);
	set_Energy_points(50);
	set_Attack_damage(20);
	std::cout << "ScavTrap " << this->get_Name() 
			<< " was created by default constructor " << this << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->get_Name() 
			<< " was destroyed by Destructor " << std::endl;
}

ScavTrap:: ScavTrap(std::string Name) : ClapTrap(Name)
{
	set_Name(Name);
	set_Hit_points(100);
	set_Energy_points(50);
	set_Attack_damage(20);
	
	std::cout << "ScavTrap " << this->get_Name() 
			<< " was created by string constructor " << this << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &fixed) : ClapTrap(fixed)
{
	std::cout << "ScavTrap " << this->get_Name()  
			<< " was created by copy constructor called " << this << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &fixed)
{
	std::cout << "Assignation operator called " << this->get_Name() 
			<< this << std::endl;
	this -> set_Name(fixed.Name);
    this -> set_Hit_points(fixed.Hit_points);
    this -> set_Energy_points(fixed.Energy_points);
    this -> set_Attack_damage(fixed.Attack_damage);
	
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
std::cout << "ScavTrap " << this -> get_Name() << " attack back " << target 
		<<  " giving " << this -> get_Attack_damage() 
		<<	" points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->get_Name() << " have enterred in Gate keeper mode" << std::endl;

}
