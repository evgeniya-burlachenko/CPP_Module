// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.cpp                                           :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/02/22 19:46:25 by skelly            #+#    #+#             */
// /*   Updated: 2022/02/24 14:50:02 by skelly           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>
#include <set>
#include <deque>

int main ()
{
	{
		std::list<int>		l;
		std::vector<int>	v;
		std::set<int>		s;
		std::deque<int>		d;

		std::cout << "--------list-------------------" << std::endl;
		for (int i = 0; i < 5; i++)
			l.push_back(i);
		try
		{
			std::list<int>::iterator itList = easyfind(l, 4);
			std::cout << *itList << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "--------vector-----------------" << std::endl;

		for (int i = 0; i < 5; i++)
			v.push_back(i);
		try
		{
			std::vector<int>::iterator itVector = easyfind(v, 3);
			std::cout << *itVector << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "--------set--------------------" << std::endl;
		for (int i = 0; i < 5; i++)
			s.insert(i);
		try
		{
			std::set<int>::iterator itSet = easyfind(s, 0);
			std::cout << *itSet << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "--------deque------------------" << std::endl;
		for (int i = 0; i < 5; i++)
			d.push_back(i);
		try
		{
			std::deque<int>::iterator iterDeque = easyfind(d, 333);
			std::cout << *iterDeque << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "*************  example 2  ************************" << std::endl;
	{
		int arr[5] = {1, 0, 3, 4, 5};
		std::list<int>li(arr, arr + 5);
		std::vector<int>ve(arr, arr + 5);
		std::set<int>se(arr, arr + 5);
		std::deque<int>de(arr, arr + 5);
		try
		{
			std::cout << "--------list-------------------" << std::endl;
			std::cout << *easyfind(li, 4) << std::endl;
			std::cout << "--------vector-----------------" << std::endl;
			std::cout << *easyfind(ve, 1) << std::endl;
			std::cout << "--------set--------------------" << std::endl;
			std::cout << *easyfind(se, 3) << std::endl;
			std::cout << "--------deque------------------" << std::endl;
			std::cout << *easyfind(de, 55) << std::endl;
	
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		return (0);
	}
}
// В отличие от стандартных массивов, контейнерные классы-массивы 
//имеют возможность динамического изменения своего размера, 
//когда элементы добавляются или удаляются. 
//Это не только делает их более удобными, чем обычные массивы, но и безопаснее.

//return U(Array, Array + n); 
//Для добавления элементов в вектор применяется функция push_back(), в который передается добавляемый элемент
//insert(pos, values): вставляет список значений начиная с позиции, на которую указывает итератор pos

//Последовательные контейнеры:

//Класс vector (или просто «вектор») — это динамический массив, способный увеличиваться по мере необходимости 
//для содержания всех своих элементов. Класс vector обеспечивает произвольный доступ 
//к своим элементам через оператор индексации [], а также поддерживает добавление и удаление элементов.

//Класс deque (или просто «дек») — это двусторонняя очередь, реализованная в виде динамического массива, 
//который может расти с обоих концов.

//List (или просто «список») — это двусвязный список, каждый элемент которого содержит 2 указателя: 
//один указывает на следующий элемент списка, а другой — на предыдущий элемент списка. 
//List предоставляет доступ только к началу и к концу списка — произвольный доступ запрещен.
// Преимуществом двусвязного списка является то, что добавление элементов происходит очень быстро

//Ассоциативные контейнеры-  это контейнерные классы, которые автоматически сортируют все свои элементы 
//(в том числе и те, которые добавляете вы).:

//set —это контейнер, который автоматически сортирует добавляемые элементы в порядке возрастания. 
//Но при добавлении одинаковых значений, set будет хранить только один его экземпляр.
// CPP program to initialize a vector from
// an array.
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
// 	int arr[] = { 10, 20, 30 };
// 	//int n = sizeof(arr) / sizeof(arr[0]);

// 	vector<int> vect(arr, arr + n);

// 	for (int x : vect)
// 		cout << x << " ";

// 	return 0;
// }
