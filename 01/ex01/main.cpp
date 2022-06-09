#include "ZombieHorde.hpp"

int main( void )
{
	ZombieHorde	horde;
	ZombieHorde	horde1;

	std::cout << "🚧 ========== TEST : WRONG NUMBER ============ 🚧" << std::endl;
	horde.horde = horde.zombieHorde(-9, "Dirty");
	horde.announce();
	delete [] horde.horde;

	std::cout << std::endl;
	std::cout << "🚧 =========== TEST : 10 ZOMBIES ============= 🚧" << std::endl;
	horde1.horde = horde1.zombieHorde(10, "Dirty");
	horde1.announce();
	delete [] horde1.horde;

	return (0);
}
