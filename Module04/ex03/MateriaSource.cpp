/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:55:04 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:32:45 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{

	for (int i = 0; i < 4; i++)
		this->_viki[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_viki[i])
			delete this->_viki[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource & other)
{
	
	for (int i = 0; i < 4; i++)
		this->_viki[i] = other._viki[i];
}


const MateriaSource &MateriaSource::operator=(const MateriaSource& ins)
{
	for (int i = 0; i < 4; i++)
		this->_viki[i] = ins._viki[i];
	
	return(*this);
}


void MateriaSource :: learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_viki[i] == NULL)
		{
			this->_viki[i] = m;
			break;		
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_viki[i] && this->_viki[i]->getType() == type)
			return(this->_viki[i]->clone());
	}
	return(0);
}
