/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:16:41 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:57:47 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
		Brain* _brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &ins);
		const Cat &operator=(const Cat &ins);
		void makeSound() const;

		Brain*  get_Brain() const;
        void    set_Brain(Brain *Brain);	
};
#endif

//Неглубокая копия копирует массив и сохраняет ссылки на исходные объекты.
//Глубокая копия копирует (клонирует) объекты, 
//поэтому они не имеют никакого отношения к оригиналу.
//Конструктор копирования используется для инициализации 
//нового объекта ранее созданным объектом того же класса. 
//По умолчанию компилятор пишет мелкую копию. 
//Поверхностная копия отлично работает, когда динамическое выделение 
//памяти не задействовано, 
//потому что при динамическом выделении памяти 
//оба объекта будут указывать на одно и то же место памяти в куче. 
//Поэтому, чтобы устранить эту проблему, мы написали глубокую копию, 
//чтобы у обоих объектов была собственная копия атрибутов. в памяти.