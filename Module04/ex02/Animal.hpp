/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:11:54 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:33:08 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
//абстрактный класс
class AAnimal
{
	protected:
		std::string _type;
		
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal &AAnimal);
		AAnimal& operator=(const AAnimal &AAnimal);
		virtual void makeSound() const = 0;//чистый виртуальный метод

		std::string getType(void) const;
		void set_type(std::string string);
};
#endif
