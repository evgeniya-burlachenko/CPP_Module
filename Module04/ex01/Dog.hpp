/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:40:14 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:34:21 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog:public Animal
{
		Brain* _brain;
	public:
		Dog();
		~Dog();	
		Dog(const Dog &Dog);
		const Dog &operator=(const Dog &Dog);
		void makeSound() const;	
 		Brain*  get_Brain() const;
        void    set_Brain(Brain *Brain);
};
#endif
