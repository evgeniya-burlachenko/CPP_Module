/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 03:47:18 by skelly            #+#    #+#             */
/*   Updated: 2022/02/22 11:12:19 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// int main()
// {
// 	int 	arr[5] = {1, 2, 3, 4, 5};
// 	double	arr2[] = {3.14, 12.111, 956.1007};
// 	float	arr3[] = {0.0001, 0.756, 0.345};
	
// 	std::cout << "------------int-------------"<< std::endl;
// 	iter(arr, 5, printInt);
// 	std::cout << "-----------double-----------"<< std::endl;
// 	iter(arr2, 3, printInt);
// 	std::cout << "-----------float-----------"<< std::endl;
// 	iter(arr3, 3, printInt);

// 	return(0);
// }

class Awesome
{
	public:
		Awesome( void ) : _n(42) { return; }
		int	get( void ) const { return this->_n; }
	private:
		int	_n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template <typename T>
void print( T const & x) { std::cout << x << std::endl; return; }

int main()
{
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter( tab, 5, print );
	iter( tab2, 5, print );

	return 0;
}