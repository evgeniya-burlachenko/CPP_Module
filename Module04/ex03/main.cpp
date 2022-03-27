/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:28:13 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 10:32:40 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ImateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();//создаю список материй
	src->learnMateria(new Ice()); 
	src->learnMateria(new Cure());//занесла в список Cure и Ice
	
	ICharacter* me = new Character("me"); //создала нового персонажа
	
	AMateria* tmp;// обьявляю предмет материи
	tmp = src->createMateria("ice");//инициализирую предмет из существующего списка
	me->equip(tmp);//добавляю в инвентарь
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);//использую 0 предмет на bob
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;

	return 0;
}
