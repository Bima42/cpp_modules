#include "ZombieHorde.hpp"

int main( void )
{
	std::cout << "Test: Wrong numbers." << std::endl;
	ZombieHorde test1(-4);
	test1.announce();

	std::cout << "Test: Horde of 10" << std::endl;
	ZombieHorde test2(10);
	test2.announce();

	std::cout << "Test: Horde of 2" << std::endl;
	ZombieHorde test3(2);
	test3.announce();

	return (0);
}
