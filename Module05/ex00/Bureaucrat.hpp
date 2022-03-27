/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:30:12 by skelly            #+#    #+#             */
/*   Updated: 2022/02/18 09:56:39 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	const std::string	_name;
	int					_grade;
	public:
	Bureaucrat();
	Bureaucrat( const Bureaucrat & ins );
	Bureaucrat( std::string name, int grade );
	~Bureaucrat();
	
	const Bureaucrat & operator=( const Bureaucrat & ins );
	std::string getName() const;
	int	getGrade() const;
	void	increment();
	void	decrement();
	//вложенный класс
	//public std::exception - стандартный класс исключений
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw(); //Это функция-член класса исключений. Const после
		// круглых скобок говорит, что это константная функция-член (может быть вызвана для константного
		// объекта), а throw() — это спецификация исключения, указывающая, что
		// она гарантированно не генерирует никаких исключений.
	};
	
	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();
	};	
};

std::ostream & operator<<(std::ostream &sout, const Bureaucrat &Bur); 

#endif
