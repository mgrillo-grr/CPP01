#include "Zombie.hpp"

Zombie::Zombie()
{}
void    Zombie::announce(void)
{
        std::cout<<name<<" : BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::~Zombie()
{
}

void	Zombie::setName(std::string newName)
{
	name = newName;
}