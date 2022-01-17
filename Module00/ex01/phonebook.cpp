#include "phonebook.hpp"

Phonebook::Phonebook()
{
	//инициализирую
	this->size = 0;
	return ;
}

Phonebook::~Phonebook()
{
	return ;
}
//метод добавление контакта
void	Phonebook::add_contact(Contact new_contact)
{
	int	i;

	i = 0;
	while(i < this->size)
		i++;
	if(i == 8)
	{
		i = 0;
		while (i < 8 - 1)
		{
			//контакт с 0 индексом перезаписываю
			this->array[i] = this->array[i + 1];
			i++;
		}
		//уменьшаю на 1 тк ниже добавться
		this->size -= 1;
	}
	//если не равен 8 то добавляю контакт 
	this->array[i] = new_contact; 
	//увеличиваю размер на 1
	this->size += 1;
}