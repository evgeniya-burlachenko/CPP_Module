/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 01:17:54 by skelly            #+#    #+#             */
/*   Updated: 2022/02/25 00:48:24 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): N(0){}
		
Span::Span(unsigned int const nbr) : N(nbr) {} 

Span:: Span(const Span & ins) : N(ins.N){*this = ins; }

Span::~Span(){}
		
Span & Span::operator=(const Span & ins)
{
	this->v = ins.v;
	this->N = ins.N;
	return(*this);
}

void Span::addNumber2(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if ( std::distance(start, end) + v.size() > this->N)
		throw CannotBeAdd();
	v.insert(v.end(), start, end);	// после которого добавить + диапазон
}

void Span:: addNumber(int new_single_nbr)
{
	if(this->v.size() == N)
		throw CannotBeAdd();
	this->v.push_back(new_single_nbr);
}

unsigned int Span:: longestSpan() const
{
	std::vector<int>			temp;
	if (this->v.size() < 2)
		throw NoSpan();
	temp = v;	
	std::sort(temp.begin(), temp.end());
	return(std::abs(temp.at(0)- temp.at(temp.size() - 1)));
}

unsigned int Span:: shortestSpan() const
{
	std::vector<int>			temp;
	std::vector<int>::iterator	it;
	int 						min;

	if (v.size() < 2)
		throw CannotBeAdd();
	temp = v;
	std::sort(temp.begin(), temp.end());
	min = *(temp.begin() + 1) - *temp.begin();
	for (it = temp.begin(); (it + 1) != temp.end(); it++)
	{
		if (*(it + 1) - *it < min)
			min = *(it + 1 )- *it;
 	}
	 return(min);
}

// unsigned int Span:: longestSpan() const
// {
// 	 int max, min;

// 	if (this->v.size() < 2)
// 		throw CannotBeAdd();
// 	max = *std::max_element( v.begin(), v.end() );
// 	min = *std::min_element( v.begin(), v.end() );
// 	return (max - min);
// }

//Возвращает количество прыжков от first до last .
//std::distance(__first, __last)предназначен для обобщения арифметики указателей, он возвращает такое значение n, что __first + n = __last.