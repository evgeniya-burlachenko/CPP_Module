/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:55:04 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:31:44 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->_name = "No name";
	for (int i = 0; i < 4; i++)
		this->_material[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_material[i])
			delete this->_material[i];
	}
}

Character::Character(std::string _name)
{
	this->_name = _name;
	for (int i = 0; i < 4; i++)
		this->_material[i] = NULL;
}

Character::Character(const Character& ins)
{
	this->_name = ins._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_material[i])
			delete this->_material[i];
		if (ins._material[i])
			this->_material[i] = ins._material[i]->clone();
		else	
			this->_material[i] = NULL;
	}
}

const Character &Character::operator=(const Character& ins)
{
	this->_name = ins._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_material[i])
			delete this->_material[i];
		if (ins._material[i])
			this->_material[i] = ins._material[i]->clone();
		else	
			this->_material[i] = NULL;
	}
	
	return(*this);
}

std::string const& Character::getName() const
{
	return(this->_name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_material[i] == NULL)
		{
			this->_material[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
if (idx >= 0 && idx < 4)
	this->_material[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_material[idx])
		this->_material[idx]->use(target);
}
