/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:11:54 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:04:32 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &Animal);
		Animal& operator=(const Animal &Animal);
		virtual void makeSound() const;

		std::string getType(void) const;//не виртуал из-за того что type -protected
		void set_type(std::string _type);
};

#endif