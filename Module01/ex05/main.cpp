/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:28:44 by skelly            #+#    #+#             */
/*   Updated: 2022/01/21 21:39:02 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen karen;

  if (argc != 2)
  {
	  std::cout << "Enter karen level: 'DEBUG' or 'INFO' or 'WARNING' or 'ERROR'" << std::endl;
	  return (1);
  }
  karen.complain(argv[1]);
}