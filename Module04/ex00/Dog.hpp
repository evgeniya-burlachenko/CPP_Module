/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:40:14 by skelly            #+#    #+#             */
/*   Updated: 2022/02/11 18:41:15 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog:public Animal
{
	public:
		Dog();
		~Dog();	
		Dog(const Dog &Dog);
		Dog &operator=(const Dog &Dog);
		void makeSound() const;
};

#endif