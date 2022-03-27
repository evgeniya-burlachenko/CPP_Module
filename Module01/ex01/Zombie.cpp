#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie(void)
{
	std::cout << this->name << " died" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::get_name(void)
{
	return(this->name);
}
void Zombie::set_name(std::string str)
{
	 this->name = str;
}
