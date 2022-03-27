/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:49:06 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:31:50 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
	AMateria* _material[4];
	std::string _name;

	public:
		Character();
		virtual ~Character();
		Character(std::string Name);
		Character(const Character & type);
		const Character &operator=(const Character& ins);
		
		std::string const &getName() const;
		void equip(AMateria* m) ;
		void unequip(int idx);
		void use (int idx, ICharacter& target);
};
#endif
