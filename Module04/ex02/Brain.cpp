/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:23:33 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:00:10 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() { std::cout << "[Brain] default constructor" << std::endl; }

Brain::~Brain() { std::cout <<"[Brain] destuctor" << std::endl; }

Brain::Brain(const Brain &Brain)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = Brain._ideas[i];
	std::cout << "[Brain] copy constructor" << std::endl;
}

const Brain &Brain::operator=(const Brain &Brain)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = Brain._ideas[i];
	return *this;
}
