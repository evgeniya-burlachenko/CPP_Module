#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
//телефонная книга - экземпляр класса
#include "contact.hpp"

class Phonebook
{
	public:
	
		Contact array[8]; //массив контактов
		int size;
//Конструктор — функция, предназначенная для инициализации объектов класса.
//Деструктор обеспечивает соответствующую очистку объектов указанного типа.
		Phonebook();//конструктор
		~Phonebook();
		void add_contact(Contact new_contact);
};

#endif