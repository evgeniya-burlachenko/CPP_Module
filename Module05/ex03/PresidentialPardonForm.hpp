/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:32:17 by skelly            #+#    #+#             */
/*   Updated: 2022/02/17 18:50:32 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <cstdlib>

class PresidentialPardonForm: public Form
{
	std::string target;
	public:
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm & President);
	PresidentialPardonForm(const std::string target);
	~PresidentialPardonForm();

	const PresidentialPardonForm & operator=(const PresidentialPardonForm & ins);
	void execute(Bureaucrat const & executor) const;	
};

#endif