/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:18:50 by skelly            #+#    #+#             */
/*   Updated: 2022/02/16 00:33:15 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
		std::string _ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain &Brain);
		const Brain &operator=(const Brain &Brain);
};
#endif
