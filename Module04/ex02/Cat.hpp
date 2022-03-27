/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:16:41 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:33:22 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
		Brain* _brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &Cat);
		const Cat &operator=(const Cat &Cat);
		void makeSound() const;
		
		void setBrain(Brain *_brain);
		Brain* getBrain()const;
};
#endif
