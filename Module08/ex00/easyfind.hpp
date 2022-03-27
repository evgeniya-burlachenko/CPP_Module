/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:19:53 by skelly            #+#    #+#             */
/*   Updated: 2022/02/24 14:45:50 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>
#include <algorithm>


class NotFoundElement : public std::exception
{
	const char *what() const throw()
	{
		return ("Element not found!");
	}
};

template <typename T>
typename T::iterator easyfind( T & container, int x)
{
	typename T::iterator it = std::find(container.begin(), container.end(), x);
	if (it != container.end())//если нет x, то возвращается end , если есть - указатель на it
		return(it);
	throw  NotFoundElement();
}
#endif

// Об итераторе можно думать, как об указателе на определенный элемент контейнерного класса 
// с дополнительным набором перегруженных операторов для выполнения четко определенных функций:
// Оператор * возвращает элемент, на который в данный момент указывает итератор.

// Итераторы обеспечивают доступ к элементам контейнера. С помощью итераторов 
// очень удобно перебирать элементы. Итератор описывается типом iterator. 
// Но для каждого контейнера конкретный тип итератора будет отличаться. 
// Так, итератор для контейнера list<int> представляет тип list<int>::iterator, 
// а итератор контейнера vector<int> представляет тип vector<int>::iterator и так далее.

// Для получения итераторов контейнеры в C++ обладают такими функциями, как begin() и end(). 

// Функция begin() возвращает итератор, который указывает на первый элемент контейнера 
// (при наличии в контейнере элементов). Функция end() возвращает итератор, 
// который указывает на следующую позицию после последнего элемента, 
// то есть по сути на конец контейнера. Если контейнер пуст, то итераторы, 
// возвращаемые обоими методами begin и end совпадают. Если итератор begin не равен итератору end, 
// то между ними есть как минимум один элемент.

// Если контейнер представляет константу, то для обращения к элементам этого контейнера 
// можно использовать только константный итератор (тип const_iterator). 
// Такой итератор позволяет считывать элементы, но не изменять их: