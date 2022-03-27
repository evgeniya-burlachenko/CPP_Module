/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:05:01 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:33:35 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
//сдeлать Animal абстрактным
int main()
{
		const Dog	j;
		const Cat	i;
		std::cout << i.getType() << " " << std::endl;
		std::cout << j.getType() << " " << std::endl;
		i.makeSound(); //will output the cat sound!
		j.makeSound();
    return (0);
}
