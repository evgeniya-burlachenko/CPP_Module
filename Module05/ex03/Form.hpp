/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:49:13 by skelly            #+#    #+#             */
/*   Updated: 2022/02/17 18:49:37 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"


class Bureaucrat;

class Form
{
	const std::string	_name;
	bool				_signed;//подписана или нет
	const int			_grade_sign;//подписание
	const int			_grade_execute;//выполнение

	public:
		Form ();
		Form ( const Form &ins );
		Form ( std::string name, int grade_sign, int grade_execute);
		virtual ~Form();

		const Form & operator=(const Form & ins);
		bool getSigned() const;
		std::string getName()const;
		int getGradeSign() const;
		int getGradeExecute() const;
		void beSigned(const Bureaucrat & bur);
		virtual void execute(Bureaucrat const & executor) const = 0;
		
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};
		
};

std::ostream & operator<<(std::ostream &sout, const Form &Form); 


#endif