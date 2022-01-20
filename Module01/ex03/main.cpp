/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 08:06:08 by skelly            #+#    #+#             */
/*   Updated: 2022/01/20 13:16:44 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        
        HumanA bob("Bob", club);
        bob.attack();//атакует
        club.setType("some other type of club");//меняет оружие
        bob.attack();//атакует
    }
    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}