/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:33:26 by skelly            #+#    #+#             */
/*   Updated: 2022/02/18 10:42:42 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"


class RobotomyRequestForm: public Form
{
	std::string target;
	public:
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm & Robot);
	RobotomyRequestForm(const std::string ins);
	~RobotomyRequestForm();

	const RobotomyRequestForm & operator=(const RobotomyRequestForm & ins);
	void execute(Bureaucrat const & executor) const;	
};


#endif