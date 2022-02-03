/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:27:56 by skelly            #+#    #+#             */
/*   Updated: 2022/02/03 17:40:36 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	set_Name("No Name ");
	set_Hit_points(100);
	set_Energy_points(100);
	set_Attack_damage(30);
	std::cout << "FragTrap " << this->get_Name() 
			<< " was born by default constructor " << this << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->get_Name() 
			<< " was closed by Destructor " << std::endl;
}

FragTrap:: FragTrap(std::string Name) : ClapTrap(Name)
{
	set_Name(Name);
	set_Hit_points(100);
	set_Energy_points(100);
	set_Attack_damage(30);
	
	std::cout << "FragTrap " << this->get_Name() 
			<< " was created by string constructor " << this << std::endl;
}

FragTrap::FragTrap(const FragTrap &fixed) : ClapTrap(fixed)
{
	// this -> set_Name(fixed.Name);
    // this -> set_Hit_points(fixed.Hit_points);
    // this -> set_Energy_points(fixed.Energy_points);
    // this -> set_Attack_damage(fixed.Attack_damage);
	std::cout << "FragTrap " << this->get_Name()  
			<< " was created by copy constructor called " << this << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fixed)
{
	std::cout << "Assignation operator called " << this->get_Name() 
			<< this << std::endl;
	this -> set_Name(fixed.Name);
    this -> set_Hit_points(fixed.Hit_points);
    this -> set_Energy_points(fixed.Energy_points);
    this -> set_Attack_damage(fixed.Attack_damage);
	
	return *this;
}

// void FragTrap::attack(const std::string &target)
// {
// std::cout << "FragTrap " << this -> get_Name() << " attack back " << target 
// 		<<  " giving " << this -> get_Attack_damage() 
// 		<<	" points of damage!" << std::endl;
// }


void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->get_Name() << " has a special capacity tool" << std::endl;

}


// int FragTrap::get_Hit_points()
// {
// 	return(this->Hit_points);
// }

// int FragTrap::get_Energy_points()
// {
// 	return(this->Energy_points);
// }

// int FragTrap::get_Attack_damage()
// {
// 	return(this->Attack_damage);
// }

// std::string FragTrap::get_Name()
// {
// 	return(this->Name);
// }

// void FragTrap::set_Hit_points(unsigned int amount)
// {
// 	this->Hit_points = amount;

// }
// void FragTrap::set_Energy_points(unsigned int amount)
// {
// 	this->Energy_points = amount;
// }

// void FragTrap::set_Attack_damage(unsigned int amount)
// {
// 	this->Attack_damage = amount;
// }

// void FragTrap::set_Name(std::string amount)
// {
// 	this->Name = amount;
// }

