#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout << name << ": has been deleted" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string newName)
{
	name = newName;
}