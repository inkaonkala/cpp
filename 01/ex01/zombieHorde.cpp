#include "Zombie.h"

Zombie *zombieHorde(int N, std::string name) 
{
	if (N <= 0)
	{
		std::cerr << "I need to make some zombies!" << std::endl;
		return (nullptr);
	}
	//Allocate zombies:
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		horde[i] = Zombie(name + std::to_string(i + 1));
	}
	return (horde);
}