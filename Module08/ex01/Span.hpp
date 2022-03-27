/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 01:50:53 by skelly            #+#    #+#             */
/*   Updated: 2022/02/25 00:32:53 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>
#include <list>
#include <iostream>

class Span
{
	unsigned int		N;
	std::vector<int> 	v;
	public:
		Span();
		Span(unsigned int nbr);
		Span(const Span & ins);
		~Span();
		
		Span & operator=(const Span & ins);
		void addNumber(int new_single_nbr); 
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
		void addNumber2(std::vector<int>::iterator start, std::vector<int>::iterator end);

		class CannotBeAdd : public std::exception
		{
				const char *what() const throw() { return("Cannot be add, container is full"); }
		};

		class NoSpan : public std::exception
		{
			const char *what() const throw() { return("Not found"); }
		};
};
#endif
