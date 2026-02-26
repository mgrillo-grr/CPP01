#include "Zombie.hpp"

// Constructor: inicializa un zombie con su nombre
Zombie::Zombie(std::string name) : _name(name) {}

// Destructor: muestra mensaje cuando el zombie es eliminado
// Útil para verificar que no hay memory leaks
Zombie::~Zombie()
{
	std::cout << _name << ": has been deleted" << std::endl;
}

// Función miembro: el zombie anuncia su presencia
void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
