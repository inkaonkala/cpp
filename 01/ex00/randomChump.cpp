#include "Zombie.h"

/*
	Create a Zombie in the stack
	- gets automatically deleted (when funtion ends)
	/ not that flexy
*/

void randomChump(std::string name) {
	Zombie stackZombie(name);
	stackZombie.announce();
}