#include "ZombieHorde.hpp"

int main( void )
{
	ZombieHorde	test;
	Zombie	*ptr;

	ptr = test.zombieHorde(5, "Yvan");
	test.announceHorde(ptr);

	std::cout << "------------------------" << std::endl;

	ptr = test.zombieHorde(8, "Yvan");
	test.announceHorde(ptr);

	return (0);
}
