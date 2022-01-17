#include "contact.hpp"

Contact::Contact(std::string data[])
{
	// в каждое поле записываю элемент массива
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
	return ;
}