/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:27:56 by skelly            #+#    #+#             */
/*   Updated: 2022/02/10 23:45:09 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->set_Name("No Name ");
	this->set_Hit_points(100);
	this->set_Energy_points(100);
	this->set_Attack_damage(30);
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
	this->set_Name(Name);
	this->set_Hit_points(100);
	this->set_Energy_points(100);
	this->set_Attack_damage(30);
	
	std::cout << "FragTrap " << this->get_Name() 
			<< " was created by string constructor " << this << std::endl;
}

FragTrap::FragTrap(const FragTrap &fixed) : ClapTrap(fixed)
{
	*this = fixed;
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

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->get_Name() << " has a special capacity tool" << std::endl;

}

