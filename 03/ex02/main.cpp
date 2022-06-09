#include "FragTrap.hpp"

int main( void )
{
	ClapTrap clap("Dude");
	ScavTrap scav("Bob");
	FragTrap frag("Michel");

	frag.highFivesGuys();
	frag.attack("Bouddha");
	frag.takeDamage(10);
	frag.beRepaired(20);
	frag.takeDamage(150);
	frag.takeDamage(80);
	frag.attack("Bouddha");
	frag.beRepaired(20);

	return (0);
}
