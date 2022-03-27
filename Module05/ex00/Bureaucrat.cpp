/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:01:23 by skelly            #+#    #+#             */
/*   Updated: 2022/02/18 11:29:40 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("No name") { this->_grade = 0; }

Bureaucrat:: Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}
Bureaucrat:: Bureaucrat(const Bureaucrat & ins): _name(ins._name) { this->_grade = ins._grade; }

Bureaucrat::~Bureaucrat() { }

const Bureaucrat & Bureaucrat::operator=(const Bureaucrat & ins)
{
	this->_grade = ins._grade;
	return *this;
}

std::string Bureaucrat :: getName() const { return(this->_name); }

int Bureaucrat::getGrade() const { return(this->_grade); }

void Bureaucrat::increment()
{
	if(this->_grade == 1)
		throw GradeTooHighException();//бросаю исключение
	this->_grade--;
}

void Bureaucrat::decrement()
{
	if(this->_grade == 150)
		throw GradeTooLowException();//тип исключения
	this->_grade++;
}
//переопределение ф-ции what
const char* Bureaucrat :: GradeTooHighException::what() const throw() { return("Grade is too hight"); }

const char* Bureaucrat :: GradeTooLowException::what() const throw() { return("Grade is too low"); }

std::ostream& operator<<(std::ostream & out, const Bureaucrat &Bur)
{
	out << Bur.getName() << ", bureaucrat grade " << Bur.getGrade() << ".";
	return out;
}