#include "Zombie.hpp"
//описание класса
Zombie::Zombie(std::string str)
{
	this->name = str;//конструктор
}

Zombie::Zombie()
{

}

Zombie::~Zombie(void)
{
	std::cout << this->name << " died" << std::endl;//деструктор
}

void Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string str)
{
	//std::cout << str << " BraiiiiiiinnnzzzZ..." << std::endl;
	 this->name = str;
}