#include "Zombie.hpp"

// Crea un zombie en el stack (memoria automática)
// Parámetro: name - nombre del zombie
// Nota: el zombie se destruye automáticamente al salir de la función
void	randomChump(std::string name)
{
	// Zombie creado en el stack - se destruye automáticamente
	Zombie zombie(name);
	
	// El zombie anuncia su presencia
	zombie.announce();
	// zombie se destruye aquí automáticamente
}
