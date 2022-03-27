/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:23:33 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:02:22 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() { std::cout << "[Brain] default constructor" << std::endl; }

Brain::~Brain() { std::cout <<"[Brain] destuctor" << std::endl; }

Brain::Brain(const Brain &ins)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ins._ideas[i];
	std::cout << "[Brain] copy constructor" << std::endl;
}

Brain &Brain::operator=(const Brain &ins)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ins._ideas[i];
	return *this;
}
