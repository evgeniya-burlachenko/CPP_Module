/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:28:44 by skelly            #+#    #+#             */
/*   Updated: 2022/01/27 01:21:16 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	
}
Karen::~Karen(void)
{
	
}

void Karen::debug(void)
{
	std::cout << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-specialketchup"
				 "burger. I really do!"
			  << std::endl;
}
void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon "
				 "costs more money. You didn’t put"
				 "enough bacon in my burger! If you did, "
				 "I wouldn’t be asking for more!"
			  << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon"
				 "for free. I’ve been coming for"
				 "years whereas you started working here since last month."
			  << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to "
				"the manager now." << std::endl;
}

void Karen::invalid_level(void)
{
	std::cout << "Invalid level" << std::endl;
}

void Karen::complain(std::string level)
{
	std::string array[4] = {
				"DEBUG", 
				"INFO", 
				"WARNING", 
				"ERROR"
	};
//массив указателей на ф-ции
	void (Karen::*func[5])(void) = {
				&Karen::debug,
				&Karen::info,
				&Karen::warning,
				&Karen::error,
				&Karen::invalid_level
	};
	int i = 0;
//иду по массиву и сравниваю со строкой, которую передали
	while (i < 4 && level != array[i])
		i++;
//если находит совпадение выходит из массива и заходит в другой массив, которая вызывает ф-цию по найденному индексу
	(this->*func[i])();
}
