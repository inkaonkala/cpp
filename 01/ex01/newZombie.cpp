#include "Zombie.h"

/*
Create a Zombie t the heap.
 -control the lifespan
 - manually delete
 - goes by pointers!
*/

Zombie *newZombie(std::string name) {
	return new Zombie(name);
}