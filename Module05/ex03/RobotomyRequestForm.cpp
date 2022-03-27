/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:08:38 by skelly            #+#    #+#             */
/*   Updated: 2022/02/17 20:37:51 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45)
{
	this->target = "Undefined";
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & Robot) : 
					Form(Robot.getName(), Robot.getGradeSign(), Robot.getGradeExecute())
{
	this->target = Robot.target;
}
RobotomyRequestForm::RobotomyRequestForm(const std::string ins) : Form("RobotomyRequestForm", 72, 45)
{
	
	this->target = ins;
}

RobotomyRequestForm::	~RobotomyRequestForm(){}

const RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & ins)
{
	this->target = ins.target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw (std::string) "form is not signed!";
	else if (executor.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
	std::cout << "some drilling noises" << std::endl;
	//Функция srand выполняет инициализацию генератора случайных чисел rand.
	srand(time(NULL));
	if (rand() % 2 == 0)//рандомное число - псевдослучайные числа
		std::cout << this->target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "It's a falure!" << std::endl;
}