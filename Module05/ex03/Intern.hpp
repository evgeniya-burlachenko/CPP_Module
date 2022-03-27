/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:14:19 by skelly            #+#    #+#             */
/*   Updated: 2022/02/18 12:22:14 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
# define INTER_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
	Intern();
	Intern(const Intern &ins);
	~Intern();

	const Intern & operator=( const Intern & ins );
	Form * makeForm( const std::string & name, const std::string & target );
	
	class FormUndefined : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

#endif