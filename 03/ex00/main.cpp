#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap test("Dude");

	test.attack("Buddy");
	test.attack("Buddy");
	test.attack("Buddy");
	test.takeDamage(9);
	test.beRepaired(15);
	test.takeDamage(12);
	test.beRepaired(40);
	test.takeDamage(1);
	test.takeDamage(12);
	test.takeDamage(1);
	test.attack("Buddy");
	test.attack("Buddy");
	test.attack("Buddy");
	test.attack("Buddy");
	test.attack("Buddy");
	test.attack("Buddy");

	return (0);
}
