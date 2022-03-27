/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:28:44 by skelly            #+#    #+#             */
/*   Updated: 2022/02/08 17:09:50 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	return ;
}
Karen::~Karen(void)
{
	return ;
}

void Karen::debug(void)
{	
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra baconfor my "
				"7XL-double-cheese-triple-pickle-special-ketchup "
				"burger. I just love it!" << std::endl;
	std::cout << std::endl;
}
void Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extrabacon "
				"cost more money. You don’t put enough! "
				"If you did I would not have to askfor it!" << std::endl;
	std::cout << std::endl;
}
void Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve beencoming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
}
void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Karen::invalid_level(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
}

void Karen::complain(std::string level)
{
	std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	//массив указателей на ф-ции
	void	(Karen::*func[5])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::invalid_level};
	int i = 0;
	//иду по массиву и сравниваю со строкой, которую передали
	while (i < 4 && level != array[i])
		i++;
	//если находит совпадение выходит из массива и заходит в другой массив, которая вызывает ф-цию по найденному индексу 
	switch (i)
	{
		case 0:
			(this->*func[0])(); //debug
		case 1:
			(this->*func[1])();//info
		case 2:
			(this->*func[2])();//warning
		case 3:
			(this->*func[3])();//error
			break ;
		default:
			(this->*func[4])();	
			
			
	}
}
