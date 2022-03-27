/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:49:06 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:32:19 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"


class Ice: public AMateria
{
	public:
		Ice();
		virtual ~Ice();
		Ice(const Ice& ins);
		const Ice &operator=(const Ice& ins);
		
		AMateria* clone() const;
		void use(ICharacter& target);
};
#endif
