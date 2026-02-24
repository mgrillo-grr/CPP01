#include "Zombie.hpp"

int     main()
{
	int	N;
	Zombie	*horde;

	N = 5;
        horde = zombieHorde(5, "hordeName");
	if(!horde)
	{
		std::cout<<"Malloc error"<<std::endl;
		return (1);
	}
	for(int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
        delete[] horde;
}