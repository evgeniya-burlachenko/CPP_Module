/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:03:45 by skelly            #+#    #+#             */
/*   Updated: 2022/01/26 17:26:41 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
//телефонная книга - экземпляр класса
#include "contact.hpp"
#include <iomanip>

class Phonebook
{
	int size;
	Contact arr[8]; //массив контактов
	public:
//Конструктор — функция, предназначенная для инициализации объектов класса.
//Деструктор обеспечивает соответствующую очистку объектов указанного типа.
		Phonebook();
		~Phonebook();

		int getSize(void);
		void setSize(int size);

		Contact getArr(int size);
		void setArr(Contact arr[]);

		void add_contact(Contact new_contact);
};

#endif