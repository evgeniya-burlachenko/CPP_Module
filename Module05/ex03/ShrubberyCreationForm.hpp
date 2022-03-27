/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:30:33 by skelly            #+#    #+#             */
/*   Updated: 2022/02/17 18:50:26 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <cstdlib>
#include <fstream>

class ShrubberyCreationForm: public Form
{
	std::string target;
	public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm & Shrubbery);
	ShrubberyCreationForm(const std::string ins);
	~ShrubberyCreationForm();

	const ShrubberyCreationForm & operator=(const ShrubberyCreationForm & ins);
	void execute(Bureaucrat const & executor) const;	
};
#endif