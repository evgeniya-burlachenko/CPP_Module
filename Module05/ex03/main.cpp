/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:02:36 by skelly            #+#    #+#             */
/*   Updated: 2022/02/18 12:41:47 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int	main(void)
{
	try
	{
		Intern someRandomIntern;
		Bureaucrat	ann("Ann", 1);
		Form* rrf;
		Form* rrf1;
		
		std::cout << "-------- INTERN CREATE -------------------------------------" << std::endl << std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf1 = someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout << std::endl;


		if (rrf)
		{
			std::cout << "-------- UNSIGNED FORM -------------------------------------" << std::endl << std::endl;
			std::cout << *rrf << std::endl;
			std::cout << *rrf1 << std::endl << std::endl;
			std::cout << "-------- FORM IS SIGNED ---------------------------------------" << std::endl << std::endl;
			ann.signForm(*rrf);
			ann.signForm(*rrf1);
			std::cout  << std::endl;
			std::cout << "-------- EXECUTION RESULT -------------------------------------" << std::endl<< std::endl;
			ann.executeForm(*rrf);
						std::cout << "-----------------" << std::endl;
			ann.executeForm(*rrf1);
			std::cout  << std::endl;
			std::cout << "------------------------------------------------------------" << std::endl << std::endl;
			delete rrf;
			delete rrf1;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		
	}
	
return(0);
}