/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:49:06 by skelly            #+#    #+#             */
/*   Updated: 2022/02/15 00:07:47 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "ImateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	AMateria* _viki[4];
	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(MateriaSource const & type);
		const MateriaSource &operator=(const MateriaSource& ins);
		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const &type);
};
#endif
