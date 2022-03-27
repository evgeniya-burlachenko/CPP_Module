/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:40:56 by skelly            #+#    #+#             */
/*   Updated: 2022/02/17 20:32:34 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
	this->target = "Undefined";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & President) :
			Form(President.getName(), President.getGradeSign(), President.getGradeExecute() )
{
	this->target = President.target;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): Form("PresidentialPardonForm", 25, 5)
{
	this->target = target;

	
}
PresidentialPardonForm::~PresidentialPardonForm(){ }

const PresidentialPardonForm & PresidentialPardonForm:: operator=(const PresidentialPardonForm & ins)
{
	this->target = ins.target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	//проверка , что форма подписана
	if (!this->getSigned())
		throw (std::string) "form is not signed!";
	//проверка на grade
	else if (executor.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}