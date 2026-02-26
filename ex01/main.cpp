#include "Zombie.hpp"

// Función principal - demuestra creación de horda de zombies
int	main(void)
{
	// Número de zombies a crear
	int	N = 5;
	Zombie	*horde;

	// Creamos una horda de N zombies con el mismo nombre
	horde = zombieHorde(N, "hordeZombie");
	if (!horde)
	{
		std::cout << "Error: Malloc." << std::endl;
		return (1);
	}
	
	// Hacemos que cada zombie anuncie su presencia
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	
	// IMPORTANTE: liberamos todo el array con delete[]
	// Esto llama al destructor de cada zombie
	delete[] horde;
	return (0);
}