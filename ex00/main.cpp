#include "Zombie.hpp"

int		main(void)
{
	Zombie	*heapZombie;
	
	heapZombie = newZombie("heapZombie");
	if (heapZombie == NULL)
	{
		std::cout << "Error: Malloc Failure." << std::endl;
		return (1);
	}
	heapZombie->announce();
	delete heapZombie;

	randomChump("stackZombie");
	return (0);
}