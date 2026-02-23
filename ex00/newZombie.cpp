#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(name)
{
	this->name = name;
}

Zombie::~Zombie()
{}

Zombie	*newZombie(std::string name)
{
	Zombie* zombie = new Zombie(name);
	return zombie;
}