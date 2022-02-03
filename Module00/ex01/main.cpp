/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:03:34 by skelly            #+#    #+#             */
/*   Updated: 2022/01/28 19:13:58 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void check_input(Phonebook book)
{
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < book.getSize(); i++)
	{
		//setwidth - ширина вывода
		std::cout << std::setw(10);
		std::cout << std::setw(10) << i + 1 << '|';

		if (book.getArr(i).get_first_name().size() > 10)
			std::cout << std::setw(10) << book.getArr(i).get_first_name().substr(0, 9) + '.'<< '|';
		else
			std::cout << std::setw(10) << book.getArr(i).get_first_name()  << '|';
		
		if (book.getArr(i).get_last_name().size() > 10)
			std::cout << std::setw(10) << book.getArr(i).get_last_name().substr(0, 9) + '.'<< '|';
		else
			std::cout << std::setw(10) << book.getArr(i).get_last_name() << '|';
		
		if (book.getArr(i).get_nickname().size() > 10)
			std::cout << std::setw(10) << book.getArr(i).get_nickname().substr(0, 9) + '.';
		else
			std::cout  << std::setw(10) << book.getArr(i).get_nickname();
		
		std::cout << std::endl;
	}
}

void	display_contact(Phonebook book)
{
	int index;
	std::string buf;

	std::cout << "Enter index : ";
	std::cin >> buf;
	index = atoi(buf.c_str());
	//c_str = Преобразует содержимое String в строку в стиле C, заканчивающуюся нулем.
	if(index >= 1 && index <= book.getSize())
	{
		std::cout << "first name: " << book.getArr(index - 1).get_first_name() << std::endl;
		std::cout << "last name: " << book.getArr(index - 1).get_last_name() << std::endl;
		std::cout << "nickname: " << book.getArr(index - 1).get_nickname() << std::endl;
		std::cout << "phone number: " << book.getArr(index - 1).get_phone_number() << std::endl;
		std::cout << "darkest secret: " << book.getArr(index - 1).get_darkest_secret() << std::endl;
	}
	else
		std::cout << "invalid index\n";
}

int main (void)
{
	Phonebook	book;
	std::string command;
	std::string contact[5];

	std::cout << "Enter your command: ";
	std::cin >> command;
	while (command != "EXIT")
	{
		if (command == "ADD")
		{
			std::cout << "Enter first name: ";
			std::cin >> contact[0];
			std::cout << "Enter last name: ";
			std::cin >> contact[1];
			std::cout << "Enter nickname: ";
			std::cin >> contact[2];
			std::cout << "Enter phone number: ";
			std::cin >> contact[3];
			std::cout << "Enter darkes secret: ";
			std::cin >> contact[4];
			// когда массив сформирован передаю массив в обьект book вызываю его с методом add contact и передаю туда
			book.add_contact(Contact(contact));
			std::cout << "contact added successfully!" << std::endl;
		}
		else if (command == "SEARCH")
		{
			check_input(book);
			display_contact(book);
		}
		std::cout << "Enter 'ADD' or 'SEARCH' or 'EXIT': ";
		std::cin >> command;
	} 
}