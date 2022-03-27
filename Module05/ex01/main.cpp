/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:02:36 by skelly            #+#    #+#             */
/*   Updated: 2022/02/18 11:47:57 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	ann("Ann", 1);
		Bureaucrat	bob("Bob", 80);
		Bureaucrat	mike("Mike", 90);
		Form		a("Form1", 33, 22);
		Form		b("Form2", 50, 80);
		
		std::cout <<std::endl;
		std::cout << "-------- UNSIGNED FORM -------------------------------------" << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << "------------------------------------------------------------" << std::endl<< std::endl;

		ann.signForm(a);
		bob.signForm(a);
		mike.signForm(b);
		std::cout <<std::endl;
		std::cout << "-------- FINISH STATUS -------------------------------------" << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << "------------------------------------------------------------" << std::endl << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}
