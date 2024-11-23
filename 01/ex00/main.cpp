#include "Zombie.h"

int main() 
{
	Zombie *heapZombie = newZombie("Bob");
	heapZombie->announce();

	delete heapZombie;

	randomChump("Dylan");
	//it destroys itself

	return (0);
}