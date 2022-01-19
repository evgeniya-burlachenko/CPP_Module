/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:16:05 by skelly            #+#    #+#             */
/*   Updated: 2022/01/20 00:36:55 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void)
{
	std::string my_str = "HI THIS IS BRAIN";
	std::string *stringPTR = &my_str;//инициалищирую адресом
	std::string &stringREF = my_str;//ссылка |тип ссылка! - инициализирую строкой-но хранит адрес
	//любая ссылка -константа!

	std::cout << "address->str: " << &my_str << std::endl;
	std::cout << "address->PTR: "<< stringPTR  << std::endl;
	std::cout << "address->REF: "<< &stringREF<< std::endl;

	std::cout << "string->PTR: "<< *stringPTR << std::endl;
	std::cout << "string->REF: "<< stringREF << std::endl;	
}
