/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 03:13:57 by skelly            #+#    #+#             */
/*   Updated: 2022/02/21 23:24:40 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T & a, T & b)
{
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	& min(T & a, T & b)
{
	return (a < b ? a :b);
}

template <typename T>
T	& max(T & a, T & b)
{
	return (a > b ? a : b);
}
#endif

//swap min max
