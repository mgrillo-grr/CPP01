#include "Zombie.hpp"

// Crea un zombie en el heap (memoria dinámica)
// Parámetro: name - nombre del zombie
// Retorna: puntero al zombie creado
// Nota: debe ser eliminado con 'delete' para evitar memory leaks
Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}
