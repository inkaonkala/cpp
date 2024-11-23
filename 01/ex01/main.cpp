#include "Zombie.h"

int main() 
{
	int sizeOfHorde = 6;

	Zombie *horde = zombieHorde(sizeOfHorde, "Bob");
	if (horde)
	{
		for (int i = 0; i < sizeOfHorde; ++i) {
			horde[i].announce();
		}
	}
	delete []horde;

	return (0);
}