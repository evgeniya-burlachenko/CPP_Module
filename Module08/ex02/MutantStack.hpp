/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:14:42 by skelly            #+#    #+#             */
/*   Updated: 2022/02/25 12:00:48 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <list>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	MutantStack() : std::stack<T>(){}
	MutantStack(const MutantStack &ins) : std::stack<T>(ins){}
	~MutantStack(){}

	const MutantStack<T> & operator=(const MutantStack<T> &ins)
	{
		std::stack<T>::operator=(ins);
		return(*this);
	}
	typedef typename std::stack<T>::container_type::iterator					iterator;
	typedef typename std::stack<T>::container_type::const_iterator				const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator			reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator		const_reverse_iterator;	

	iterator begin() { return( this->c.begin() ); }
	
	const_iterator begin() const { return( this->c.begin() ); }
	
	iterator end() { return( this->c.end() ); }

	const_iterator end() const { return( this->c.end() );	}

	reverse_iterator rbegin() { return( this->c.rbegin() ); }

	const_reverse_iterator rbegin() const { return( this->c.rbegin() ); }
	
	reverse_iterator rend() { return( this->c.rend() ); }
	
	const_reverse_iterator rend() const { return( this->c.rend() ); }
};

#endif

//Вся прелесть стека в том и заключается, что за единицу времени 
//можно работать только с верхним элементом: извлекать его, извлекать его, 
//чтобы извлечь последующие элементы и т.д. Это принцип LIFO( Last In First Out ),
// по которому и работает стек. Если вам надо за единицу времени получать элементы, 
//расположенные ниже первого, то используйте другую структуру данных
//( массив, список, вектор и т.д ).
