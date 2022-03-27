/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:22:34 by skelly            #+#    #+#             */
/*   Updated: 2022/02/17 21:29:25 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137)
{
	this->target = "Undefined";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & Shrubbery) : Form(Shrubbery.getName(), Shrubbery.getGradeSign(), Shrubbery.getGradeExecute())
{
	this->target = Shrubbery.target;
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string ins) : Form("ShrubberyCreationForm", 145, 137)
{
	
	this->target = ins;
}

ShrubberyCreationForm::	~ShrubberyCreationForm(){}

const ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & ins)
{
	this->target = ins.target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream file;
	std::string filename;
	
	if (!this->getSigned())
		throw (std::string) "form is not signed!";
	else if (executor.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
	std::ofstream out;
	out.open(this->target + " _shrubbery");
	if (!out.is_open())//Метод проверки открыт ли файл is_open() 
		throw(std::string) ("Error opening ");
	out		<<"◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯\n"
			<<"◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯\n"
			<<"┈◯◯╰┻◯◯╋◯┻◯◯╯◯╯┈\n"
			<<"┈┈╰━┓╰━┋┗━╯┣━╯┈┈\n"
			<<"╱╲┈┈╰━┓┆┏┳━╯┈┈╱╲\n"
			<<"┈┈╱╲┈┈┃┋┋┃┈┈┈╱┈┈\n"
			<<"━━━━━━┻┻┻┻━━━━━━\n";
	out.close();
}