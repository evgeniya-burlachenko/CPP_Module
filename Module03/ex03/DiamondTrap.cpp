/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:27:56 by skelly            #+#    #+#             */
/*   Updated: 2022/02/10 23:54:47 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
{
	this->Name = "No name";
	this -> Hit_points = (FragTrap::Hit_points);
    this -> Energy_points = (ScavTrap::Energy_points);
    this -> Attack_damage = (FragTrap::Attack_damage);
	std::cout << "DiamondTrap " <<  this->Name
			<< " was born by default constructor " << this << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	
	std::cout << "DiamondTrap " << this->Name
			<< " was closed by Destructor " << this <<std::endl;
}

DiamondTrap:: DiamondTrap(std::string Name) : ClapTrap(), ScavTrap(Name), FragTrap(Name)
{
	this->Name = Name;
	this->ClapTrap::Name += "_clap_name";
	this -> Hit_points = (FragTrap::Hit_points);
    this -> Energy_points = (ScavTrap::Energy_points);
    this -> Attack_damage = (FragTrap::Attack_damage);
	
	std::cout << "DiamondTrap " <<  this->Name
			<< " was created by string constructor " << this << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &fixed): ClapTrap(fixed), ScavTrap(fixed), FragTrap(fixed)
{
	*this = fixed;
	std::cout << "DiamondTrap " << this-> Name
			<< " was created by copy constructor called " << this << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &fixed)
{
	std::cout << "Assignation operator called "
			<< this << std::endl;
	this ->Name= fixed.Name;
	this->ClapTrap::Name  = fixed.ClapTrap::get_Name();
    this -> Hit_points = (fixed.Hit_points);
    this -> Energy_points = (fixed.Energy_points);
    this -> Attack_damage = (fixed.Attack_damage);
	return *this;
}

void DiamondTrap::attack(const std::string &target)
{
	//обращаюсь к области видимости скав трепа
	ScavTrap::attack(target);
}

//конфликтующие имена
void DiamondTrap::whoAmI()
{
	std::cout << "----------------------------------------------------------------" <<std::endl;
	std::cout << "DiamondTrap Name is: " << this -> Name << "; "
	<< "ClapTrap Name is: " << ClapTrap::get_Name() << std::endl;
		std::cout << "----------------------------------------------------------------" <<std::endl;
}


