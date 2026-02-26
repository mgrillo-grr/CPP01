#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

// Clase Zombie - representa un zombie básico
// Demuestra gestión de memoria (stack vs heap)
class Zombie
{
	private:
		std::string _name;  // Nombre del zombie (privado con _)

	public:
		// Constructor: crea zombie con nombre específico
		Zombie(std::string name);
		
		// Destructor: muestra mensaje de eliminación
		~Zombie();

		// Función miembro: el zombie anuncia su presencia
		void	announce(void);
};

// Funciones globales para crear zombies
Zombie  *newZombie(std::string name);    // Crea en heap (manual delete)
void	randomChump(std::string name);      // Crea en stack (auto-delete)

#endif