/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:03:41 by skelly            #+#    #+#             */
/*   Updated: 2022/02/09 14:38:06 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	this->size = 0;
	return ;
}

Phonebook::~Phonebook()
{
	//ничего не делаю тк не выделяю память
}

int	Phonebook::getSize(void)
{
	return (this->size);
}

void	Phonebook::setSize(int size)
{
   this->size = size;
}

Contact Phonebook::getArr(int size)
{
   return(this->arr[size]);
}

void	Phonebook::setArr(Contact arr[])
{
   this->arr[size] = arr[size];
}
	
void	Phonebook::add_contact(Contact new_contact)
{
	int	i;

	i = -1;
	while(++i < this->size)// 1 доступный индекс в зав-ти от текущего размера
		;
	if(i == 8)
	{
		i = 0;
		while (i < 8 - 1)
		{
			//контакт с 0 индексом перезаписываю следующим эл-том
			//сдвигаю все наверх, и старая 0 запись удаляется
			this->arr[i] = this->arr[i + 1];
			i++;
		}
		this->size -= 1;
	}
	this->arr[i] = new_contact; 
	this->size += 1;
}