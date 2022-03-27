/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:56:29 by skelly            #+#    #+#             */
/*   Updated: 2022/02/09 23:34:34 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	my_zombie(name);

	my_zombie.announce();
	// Zombie* my_zombie = new Zombie(name);
	// my_zombie->announce();
	// delete(my_zombie);	
}

	