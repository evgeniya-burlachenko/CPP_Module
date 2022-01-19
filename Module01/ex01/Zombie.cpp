#include "Zombie.hpp"
//описание класса
Zombie::Zombie(std::string str)
{
	name = str;//конструктор
}

Zombie::~Zombie(void)
{
	std::cout << name << " died" << std::endl;//деструктор
}
//обьявление имени
void Zombie::announce(void)
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}