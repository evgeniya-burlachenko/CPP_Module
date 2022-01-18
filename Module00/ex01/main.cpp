/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:03:34 by skelly            #+#    #+#             */
/*   Updated: 2022/01/18 09:03:35 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void check_input(Phonebook book)
{
	int	i;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	i = 0;
	while (i < book.size)
	{
		//setwidth - ширина вывода
		std::cout << std::setw(10);
		std::cout << std::setw(10) << i + 1 << '|';

		if (book.array[i].first_name.size() > 10)
			std::cout << std::setw(10) << book.array[i].first_name.substr(0, 9) + '.'<< '|';
		else
			std::cout << std::setw(10) << book.array[i].first_name  << '|';
		
		if (book.array[i].last_name.size() > 10)
			std::cout << std::setw(10) << book.array[i].last_name.substr(0, 9) + '.'<< '|';
		else
			std::cout << std::setw(10) << book.array[i].last_name << '|';
		
		if (book.array[i].nickname.size() > 10)
			std::cout << std::setw(10) << book.array[i].nickname.substr(0, 9) + '.';
		else
			std::cout  << std::setw(10) << book.array[i].nickname;
		
		std::cout << std::endl;
		i++;
	}
}

void	display_contact(Phonebook book)
{
	int index;
	std::string buf;

	std::cout << "Enter index : ";
	std::cin >> buf;
	index = atoi(buf.c_str());
	if(index >= 1 && index <= book.size)
	{
		std::cout << "first name: " << book.array[index - 1].first_name << std::endl;
		std::cout << "last name: " << book.array[index - 1].last_name << std::endl;
		std::cout << "nickname: " << book.array[index - 1].nickname << std::endl;
		std::cout << "phone number: " << book.array[index - 1].phone_number << std::endl;
		std::cout << "darkest secret: " << book.array[index - 1].darkest_secret << std::endl;
	}
	else
		std::cout << "invalid index\n";
}

int main (void)
{
	Phonebook	book;//обьект класса вместе с ним создаются 8 пустых обтектов контактов
	std::string command;
	std::string contact[5];//массив строк которые буду добавлять в контакты

	std::cout << "Enter your command: ";
	std::cin >> command;
	while (command != "EXIT")//сравнение 2 строк
	{
		if (command == "ADD")
		{//приглашение на ввод полей - фоомирую массив
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
			// когда массив сформирован переда/ массив в обьект book вызываю его с мотодом add contact и передаю туда

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