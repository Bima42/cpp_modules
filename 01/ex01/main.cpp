#include "ZombieHorde.hpp"

int main( void )
{
	ZombieHorde	horde;
	ZombieHorde	horde1;

	horde.horde = horde.zombieHorde(-9, "Dirty");
	horde.announce();

	horde1.horde = horde1.zombieHorde(10, "Dirty");
	horde1.announce();
	return (0);
}
