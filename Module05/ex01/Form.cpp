/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:15:15 by skelly            #+#    #+#             */
/*   Updated: 2022/02/18 10:31:11 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name( "No name" ), _grade_sign(0), _grade_execute(0)
{
	this->_signed = false;
}

Form::Form( const Form & ins ) : _name(ins._name), _grade_sign(ins._grade_sign), _grade_execute(ins._grade_execute)
{
	this->_signed = false;
}

Form::Form(std::string name, int grade_sign, int grade_execute) : _name(name), _grade_sign(grade_sign), _grade_execute(grade_execute)
{
	if (grade_sign < 1 || grade_execute < 1)
		throw GradeTooHighException();
	if (grade_sign > 150 || grade_execute > 150)
		throw GradeTooLowException();
	this->_signed = false;
}

Form::~Form(){}

const Form & Form :: operator=(const Form & ins)
{
	(void)ins;
	return *this;
}

bool Form:: getSigned() const { return(this->_signed); }

std::string Form:: getName()const { return (this->_name); }

int Form::getGradeSign() const { return (this->_grade_sign); }

int Form:: getGradeExecute() const {return (this->_grade_execute); }

//проверяю - подписана ди форма или нет
void Form ::beSigned(const Bureaucrat & bur)
{
	if (this->_signed)
		throw (std::string) "form is signed earlier!";
	if (bur.getGrade() <= this->_grade_sign)
		this->_signed = true;
	else	
		throw Form::GradeTooLowException();
}

const char* Form :: GradeTooHighException::what() const throw() { return("Grade is too hight"); }

const char* Form :: GradeTooLowException::what() const throw() { return("Grade is too low"); }

std::ostream& operator<<(std::ostream & out, const Form &form)
{
	out << form.getName() << ", grade_execute " << form.getGradeSign() << ", grade_sign "
	<< form.getGradeExecute() << " , status: ";
	if (form.getSigned ())
		out << ", signed. " ;
	else
		out << ", unsigned. ";
	return out;
}