/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 03:47:14 by skelly            #+#    #+#             */
/*   Updated: 2022/02/22 00:32:10 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T * array, int len, void (*func)( const T & num))
{
	for( int i = 0; i < len; i++)
		func( array[i] );
}

template <typename T>
void printInt(const T & num) { std::cout << num * 2 - 1 << std::endl;}

#endif
