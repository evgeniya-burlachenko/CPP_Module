/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:13:48 by skelly            #+#    #+#             */
/*   Updated: 2022/02/18 12:22:38 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

	Intern::Intern(){ }

	Intern::Intern(const Intern &ins) { (void)ins; }
	
	Intern::~Intern() { }

	const Intern & Intern::operator=( const Intern & ins ) 
	{
		(void)ins; 
		return *this;
	 }
	 
	Form * Intern::makeForm( const std::string & name, const std::string & target )
	{
		int			i;
		Form *		form;
		std::string	formArray[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
		i = 0;
		while (i < 3 && formArray[i] != name)
			i++;

		switch (i)
		{
			case 0:
				form = new ShrubberyCreationForm(target);
				std::cout << "Intern creates " << name << std::endl;
				return (form);
			case 1:
				form = new RobotomyRequestForm(target);
				std::cout << "Intern creates " << name << std::endl;
				return (form);
			case 2:
				form = new PresidentialPardonForm(target);
				std::cout << "Intern creates " << name << std::endl;
				return (form);
			default:
				throw FormUndefined();
		}
	return (NULL);
	}

	const char* Intern :: FormUndefined::what() const throw() { return("Unable to create"); }