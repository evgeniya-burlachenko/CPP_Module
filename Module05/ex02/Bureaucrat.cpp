/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:01:23 by skelly            #+#    #+#             */
/*   Updated: 2022/02/18 11:09:18 by skelly           ###   ########.fr       */
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
		throw GradeTooHighException();
	this->_grade -= 1;
}

void Bureaucrat::decrement()
{
	if(this->_grade == 150)
		throw GradeTooLowException();//тип исключения
	this->_grade += 1;
}
//переопределение ф-ции what
const char* Bureaucrat :: GradeTooHighException::what() const throw() { return("Grade is too hight"); }

const char* Bureaucrat :: GradeTooLowException::what() const throw() { return("Grade is too low"); }

std::ostream& operator<<(std::ostream & out, const Bureaucrat &Bur)
{
	out << Bur.getName() << ", bureaucrat grade " << Bur.getGrade() << ".";
	return out;
}


void Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
	}
	catch (std::exception & e)
	{
		//низкий grade
		std::cerr << this->_name << " couldn’t sign " 
		<< form.getName() << " because " << e.what() << std::endl;
		return ;
	}
	catch (std::string str)
	{
		//ошибка besigned
		std::cerr << this->_name << " couldn’t sign" 
		<< form.getName() << " because " << str << std::endl;
		return ;
	}
	std::cout << this->_name << " signed " << form.getName() << std::endl;
}


void Bureaucrat::executeForm(Form const& form)
{
	try
	{
		form.execute(*this);
	}
	catch (std::exception & e)
	{
		//низкий grade
		std::cerr << this->_name << " couldn’t execute " 
		<< form.getName() << " because " << e.what() << std::endl;
		return ;
	}
	catch (std::string str)
	{
		//ошибка executed
		std::cerr << this->_name << " couldn’t execute" 
		<< form.getName() << " because " << str << std::endl;
		return ;
	}
	std::cout << this->_name << " executed " << form.getName() << std::endl;
}