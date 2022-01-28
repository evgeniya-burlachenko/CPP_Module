/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:16:05 by skelly            #+#    #+#             */
/*   Updated: 2022/01/26 21:31:04 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
//разница между ссылкой и указателем 
int main (void)
{
	std::string my_str = "HI THIS IS BRAIN";
	std::string *stringPTR = &my_str;//инициализирую адресом
	std::string &stringREF = my_str;//ссылка |тип ссылка! - инициализирую строкой-но хранит адрес
	//ссылка -константа, поэтому инициализация сразу при обьявлении

	std::cout << "address->str: " << &my_str << std::endl;
	std::cout << "address->PTR: "<< stringPTR  << std::endl;
	std::cout << "address->REF: "<< &stringREF<< std::endl;

	std::cout << "string->PTR: "<< *stringPTR << std::endl;
	std::cout << "string->REF: "<< stringREF << std::endl;	
}
