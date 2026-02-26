#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

// Clase Zombie - representa un zombie para hordas
// Demuestra creación de arrays y gestión de memoria
class Zombie
{
	private:
		std::string _name;  // Nombre del zombie (privado con _)

	public:
		// Constructor por defecto - necesario para crear arrays
		Zombie();
		
		// Destructor - muestra mensaje de eliminación
		~Zombie();

		// Función miembro: el zombie anuncia su presencia
		void	announce(void);
		
		// Setter: establece el nombre del zombie
		// Usado por zombieHorde() para nombrar a cada zombie
		void	setName(std::string newName);
};

// Función global para crear hordas de zombies
// Retorna array de N zombies con el mismo nombre
Zombie	*zombieHorde(int N, std::string name);

#endif