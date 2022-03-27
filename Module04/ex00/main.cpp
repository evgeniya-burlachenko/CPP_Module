/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:05:01 by skelly            #+#    #+#             */
/*   Updated: 2022/02/12 09:37:57 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
//Полиморфизм - «один интерфейс — множество методов».
//Виртуальные методы нужны когда через указатель класса-родителя(Animal *), 
//который указывает на какой-то класс-потомок (кошка/собака) 
//вызывается некоторый метод.
//для того, чтобы при удалении объекта производного класса через указатель на 
//базовый класс был вызван правильный деструктор (деструктор производного класса) - виртуал деструктор
int main()
{
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
		std::cout << "***********************************************" << std::endl;
	}
	{
		const WrongAnimal *wrong = new WrongAnimal();
		const WrongAnimal *wcat = new WrongCat();
		std::cout << wrong->getType() << " " << std::endl;
		std::cout << wcat->getType() << " " << std::endl;
		wrong->makeSound();
		wcat->makeSound();
		delete wrong;
		delete wcat;
	}
  
	return 0;
}