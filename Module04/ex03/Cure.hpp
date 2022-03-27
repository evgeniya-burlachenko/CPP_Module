/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:49:06 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:32:07 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"


class Cure: public AMateria
{
	public:
		Cure();
		virtual ~Cure();
		Cure(const Cure& ins);
		const Cure &operator=(const Cure& ins);
		
		AMateria* clone() const;
		void use(ICharacter& target);
};
#endif
