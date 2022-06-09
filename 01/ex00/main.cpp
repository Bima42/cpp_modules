#include "ZombieEvent.hpp"

int main ( void )
{
	Zombie		zomb1;
	Zombie*		zomb2;
	ZombieEvent	event;

	zomb1.announce();

	event.setZombieType("Human");
	zomb2 = event.newZombie("El Crack");
	zomb2->announce();
	delete zomb2;

	event.setZombieType("Random");
	event.randomChump("Yvan");
	event.randomChump("Edjie");
	event.randomChump("Putchar");
	event.randomChump("Duboulow");

	return (0);
}
