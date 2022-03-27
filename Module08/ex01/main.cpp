/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 00:41:16 by skelly            #+#    #+#             */
/*   Updated: 2022/02/25 00:53:11 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch( const std::exception & e) 
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}

// int main()
// {
// 	Span sp = Span(10000);
// 	std::vector<int> test;
// 	try
// 	{
// 		for (int i = 0; i < 10000; i++)
// 			test.push_back(i);
// 		sp.addNumber2(test.begin(), test.end());
// 		std::cout << sp.shortestSpan() << std::endl;
// 		std::cout << sp.longestSpan() << std::endl;
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	return 0;
// }