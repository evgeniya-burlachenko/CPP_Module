/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:02:36 by skelly            #+#    #+#             */
/*   Updated: 2022/02/18 12:08:36 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	ann("Ann", 1);
		Bureaucrat	bob("Bob", 34);
		Bureaucrat	mike("Mike", 150);
		Form*		a = new ShrubberyCreationForm("file");
		Form*		b = new RobotomyRequestForm("Target");
		Form*		c = new PresidentialPardonForm("Convicted");
		Form*		d = new PresidentialPardonForm("Convicted");
		std::cout << "-------- FORM IS SIGNED ---------------------------------------" << std::endl;
		ann.signForm(*a);
		bob.signForm(*b);
		ann.signForm(*b);
		mike.signForm(*c);
		std::cout << "---------------------------------------------------------------" << std::endl;
		std::cout << "-------- EXECUTION RESULT -------------------------------------" << std::endl;
		ann.executeForm(*c);
		mike.executeForm(*b);
		bob.executeForm(*b);
		bob.executeForm(*a);
		bob.executeForm(*d);
		std::cout << "------------------------------------------------------------" << std::endl;
		delete a;
		delete b;
		delete c;
		delete d;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}