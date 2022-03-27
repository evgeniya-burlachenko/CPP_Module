/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:27:56 by skelly            #+#    #+#             */
/*   Updated: 2022/02/10 19:57:08 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name ("No name"), Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap " << this->get_Name() 
			<< " was created by default constructor "  << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->get_Name() 
			<< " was killed by Destructor " << std::endl;
}

ClapTrap:: ClapTrap(std::string Name) : Name(Name), Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap " << this->get_Name() 
			<< " was created by string constructor "  << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &fixed)
{
	this -> set_Name(fixed.Name);
    this -> set_Hit_points(fixed.Hit_points);
    this -> set_Energy_points(fixed.Energy_points);
    this -> set_Attack_damage(fixed.Attack_damage);
	std::cout << "ClapTrap " << this->get_Name()  
			<< " was created by copy constructor called "  << std::endl;
    	
}

ClapTrap &ClapTrap::operator=(const ClapTrap &fixed)
{
	std::cout << "Assignation operator called " << this->get_Name()  << std::endl;
	this -> set_Name(fixed.Name);
    this -> set_Hit_points(fixed.Hit_points);
    this -> set_Energy_points(fixed.Energy_points);
    this -> set_Attack_damage(fixed.Attack_damage);
	
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
std::cout << "ClapTrap " << this -> get_Name() << " attack " << target 
		<<  " causing " << this -> get_Attack_damage() 
		<<	" points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if((this->Hit_points -= amount) > 0)
		std::cout  << "ClapTrap " << this->get_Name() << " takes " 
				<< amount << " of damage" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->get_Name() << " died" << std::endl;
		this->Hit_points = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->Hit_points += amount;
	std::cout  << "ClapTrap " << this->get_Name()  
			<< " be repaired " << amount << " points"  << std::endl;
}

int ClapTrap::get_Hit_points() const { return(this->Hit_points); }
int ClapTrap::get_Energy_points() const { return(this->Energy_points); }
int ClapTrap::get_Attack_damage() const { return(this->Attack_damage); }
std::string ClapTrap::get_Name() const { return(this->Name); }

void ClapTrap::set_Hit_points(unsigned int const amount) { this->Hit_points = amount; }
void ClapTrap::set_Energy_points(unsigned int const amount) { this->Energy_points = amount; }
void ClapTrap::set_Attack_damage(unsigned int const amount) {	this->Attack_damage = amount; }
void ClapTrap::set_Name(std::string const amount) { this->Name = amount; }

