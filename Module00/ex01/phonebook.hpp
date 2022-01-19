/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:03:45 by skelly            #+#    #+#             */
/*   Updated: 2022/01/19 12:41:17 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
//телефонная книга - экземпляр класса
#include "contact.hpp"
#include <iomanip>

class Phonebook
{
	public:
	
		Contact arr[8]; //массив контактов
		int size;
//Конструктор — функция, предназначенная для инициализации объектов класса.
//Деструктор обеспечивает соответствующую очистку объектов указанного типа.
		Phonebook();//конструктор
		~Phonebook();
		void add_contact(Contact new_contact);
};

#endif