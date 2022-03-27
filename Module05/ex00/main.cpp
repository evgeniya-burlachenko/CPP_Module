/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:02:36 by skelly            #+#    #+#             */
/*   Updated: 2022/02/18 10:06:44 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	ann("Ann", 15);
		Bureaucrat	bob("Bob", 10);
		ann.decrement();
		bob.increment();
		std::cout << ann << std::endl;
		std::cout << bob << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}


}
