#include "Zombie.hpp"

// Crea una horda de zombies en una sola asignación de memoria
// Parámetros: N - cantidad de zombies, name - nombre para todos
// Retorna: puntero al primer zombie del array
// Nota: debe ser liberado con delete[]
Zombie	*zombieHorde(int N, std::string name)
{
	// Validamos que N sea positivo
	if (N <= 0) 
		return (NULL);
	
	// Creamos array de N zombies en una sola asignación
	Zombie *horde;
	horde = new Zombie[N];
	if (!horde)
		return (NULL);

	// Asignamos el mismo nombre a cada zombie
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	return (horde);
}
