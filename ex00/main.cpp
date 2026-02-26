#include "Zombie.hpp"

// Función principal - demuestra diferencia entre stack y heap
int	main(void)
{
	// Creamos un zombie en el heap usando newZombie()
	Zombie	*heapZombie;
	
	// newZombie() crea un zombie en memoria dinámica
	heapZombie = newZombie("Foo");
	if (heapZombie == NULL)
	{
		std::cout << "Error: Malloc." << std::endl;
		return (1);
	}
	
	// El zombie del heap anuncia su presencia
	heapZombie->announce();
	
	// IMPORTANTE: liberamos memoria manualmente
	delete heapZombie;  // Llama al destructor

	// Creamos un zombie en el stack usando randomChump()
	// Se destruye automáticamente al finalizar la función
	randomChump("Foo");
	
	return (0);
}