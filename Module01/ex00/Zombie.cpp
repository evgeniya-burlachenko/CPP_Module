#include "Zombie.hpp"
//описание класса
Zombie::Zombie(std::string str)
{
	this->name = str;//конструктор
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " died" << std::endl;//деструктор
}
//обьявление имени
void Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}