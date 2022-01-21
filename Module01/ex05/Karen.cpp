/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:28:44 by skelly            #+#    #+#             */
/*   Updated: 2022/01/21 21:41:18 by skelly           ###   ########.fr       */
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
	std::cout << "I love to get extra baconfor my "
				"7XL-double-cheese-triple-pickle-special-ketchup "
				"burger. I just love it!" << std::endl;
}
void Karen::info(void)
{
	std::cout << "I cannot believe adding extrabacon "
				"cost more money. You don’t put enough! "
				"If you did I would not have to askfor it!" << std::endl;
}
void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra "
				"bacon for free. I’ve beencoming here for "
				"years and you just started working here last month." << std::endl;
}
void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to "
				"the manager now." << std::endl;
}

void Karen::invalid_level(void)
{
	std::cout << "Invalid level" <<std::endl;
}

void Karen::complain(std::string level)
{
	std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Karen::*func[5])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::invalid_level};
	int i = 0;
	while (i < 4 && level != array[i])
		i++;
	(this->*func[i])();
}