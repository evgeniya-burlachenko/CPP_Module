/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:03:29 by skelly            #+#    #+#             */
/*   Updated: 2022/01/26 15:55:40 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(std::string data[])
{
	this->first_name = data[0];
	this->last_name = data[1];
	this->nickname = data[2];
	this->phone_number = data[3];
	this->darkest_secret = data[4];
}

Contact::Contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}

Contact::~Contact()
{
	
}

std::string	Contact::get_first_name(void)
{
	return (this->first_name);
}

std::string	Contact::get_last_name(void)
{
	return (this->last_name);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string	Contact::get_phone_number(void)
{
	return (this->phone_number);
}

std::string	Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}

void	Contact::set_first_name(std::string str)
{
   this->first_name = str;
}

void	Contact::set_last_name(std::string str)
{
   this->last_name = str;
}

void	Contact::set_nickname(std::string str)
{
   this->nickname = str;
}
void	Contact::set_phone_number(std::string str)
{
   this->phone_number = str;
}

void	Contact::set_darkest_secret(std::string str)
{
   this->darkest_secret = str;
}