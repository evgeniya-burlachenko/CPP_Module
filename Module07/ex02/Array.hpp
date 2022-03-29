/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:49:37 by skelly            #+#    #+#             */
/*   Updated: 2022/02/22 01:00:35 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
	T *				a;
	unsigned int	len;
	public:

		Array() :  a(NULL), len(0){} ;//1
		Array(unsigned int n){ a = new T[n]; len = n; } //2
		Array(const Array<T> & ins): a(NULL) { *this = ins; } //3	
		~Array() { if ( a) delete [] a ;}
		
		const Array<T> & operator=(const Array<T> & ins) //4
		{
			if (a)
				delete[] a;
			a = new T[ins.size()];
			len = ins.size();
			for (unsigned int i = 0; i < ins.size(); i++)
				a[i] = ins.a[i];
			return (*this);
		}
		
		class OutOfBounds : public std::exception
		{
				const char* what() const throw()
				{
					return("index is out of bounds");
				}
		};
		
		T &operator[](unsigned int idx) const // 5
		{
			if (idx >= len)
				throw OutOfBounds(); //6
			return (a[idx]);
		}
		unsigned int size() const { return (len); }//7
};
	
#endif

//1. Конструкция без параметра: Создает пустой массив.
//2. Конструкция с беззнаковым int n в качестве параметра: Создает массив из n элементов, инициализированных по умолчанию.
//3 - 4. Построение с помощью оператора копирования и присваивания. В обоих случаях изменение либо
// исходного массива, либо его копии после копирования не должно влиять на другой массив.
//5. Доступ к элементам можно получить с помощью оператора индекса: [ ].
//6.При доступе к элементу с помощью оператора [ ], если его индекс находится за пределами, выдается
//std::exception.
//7.size(), которая возвращает количество элементов в массиве. 

////Глубокая копия копирует (клонирует) объекты, 
//поэтому они не имеют никакого отношения к оригиналу.
//По умолчанию компилятор пишет мелкую копию. 
//Поверхностная копия отлично работает, когда динамическое выделение 
//памяти не задействовано, 
//потому что при динамическом выделении памяти 
//оба объекта будут указывать на одно и то же место памяти в куче. 
//Поэтому, чтобы устранить эту проблему, мы написали глубокую копию, 
//чтобы у обоих объектов была собственная копия атрибутов. в памяти.