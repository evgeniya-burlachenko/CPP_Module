/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:22:35 by skelly            #+#    #+#             */
/*   Updated: 2022/02/20 23:55:08 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

//случайным образом создает экземпляры A, B или C 
//и возвращает экземпляр в качестве базового указателя. 
Base * generate(void)
{
	// Base *arr[3] = {new A(), new B(), new(C)};
	srand (time(NULL));
	int ins = rand() % 3;
	switch(ins)
	{
		case 1:
			return(new A());
		case 2:
			return(new B());
		default:
			return(new C());
	}
}

// выводит фактический тип объекта, на который указывает p: "A", "B" или "C".
void identify(Base* p)
{
	if (dynamic_cast < A * > (p))
		std::cout << "This is class A" << std::endl;
	if (dynamic_cast < B * > (p))
		std::cout << "This is class B" << std::endl;
	if (dynamic_cast < C * > (p))
		std::cout << "This is class C" << std::endl;
}

//выводит фактический тип объекта, на который указывает p: "A", "B" или "C". 
//Использование указателя внутри этой функции запрещено.
void identify(Base& p)
{
	A	a;
	B	b;
	C	c;

	try
	{
		a = dynamic_cast<A &>(p);
	
	}
	catch (const std::exception &e)
	{
		try
		{
			b = dynamic_cast<B &>(p);
		}
		catch (const std::exception &e)
		{
			try
			{
				c = dynamic_cast<C &>(p);
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << '\n';
			}
			std::cout << "This is class C" << '\n';
			return;
		}
		std::cout << "This is class B" << '\n';
		return;
	}
	std::cout << "This is class A" << '\n';
	return;
}

int main()
{
    Base * test;

    test = generate();
    identify(test);
    identify(*test);
	delete(test);
    return (0);
}

// Основное назначение dynamic_cast - преобразование указателя, 
// который содержит адрес объекта-родителя, к указателю типа объекта-потомка. 
// При невозможности преобразования (типы не состоят в родстве) будет получен нулевой указатель. 
// При работе со ссылками при невозможности преобразования типа будет сгенерировано исключение std::bad_cast.