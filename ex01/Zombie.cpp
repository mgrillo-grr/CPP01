#include "Zombie.hpp"

// Constructor por defecto - crea zombie sin nombre
// Usado por zombieHorde() para crear arrays
Zombie::Zombie() {}

// Destructor - muestra mensaje cuando el zombie es eliminado
Zombie::~Zombie()
{
	std::cout << _name << ": has been deleted" << std::endl;
}

// Función miembro: el zombie anuncia su presencia
void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Setter: establece el nombre del zombie
// Usado por zombieHorde() para nombrar a cada zombie
void	Zombie::setName(std::string newName)
{
	_name = newName;
}