/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:35:36 by skelly            #+#    #+#             */
/*   Updated: 2022/01/19 17:10:28 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	//Переменная класса Zombie
	Zombie	zombie("Zombie_on_stack");
	zombie.announce();
	//zombie2 создаю динамическим выделением памяти
	//указатель на обьект типа Zombie
	Zombie *zombie2;
	zombie2 = newZombie("Zombie_on_heach");
	zombie2->announce();
	//функция, которая создает зомби и заставляет его объявить о себе.
	randomChump("Zombie_on_randomChump_on_stack");
	delete zombie2; //связка new-delete (аналогично malloc-free)
}

