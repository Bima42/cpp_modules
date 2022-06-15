#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap clap("Dude");
	ScavTrap scav("Bob");


	clap.attack("Buddy");
	clap.takeDamage(9);
	clap.beRepaired(15);
	clap.takeDamage(12);
	clap.beRepaired(40);
	clap.takeDamage(1);
	clap.takeDamage(12);

	std::cout << "-------------------------------------" << std::endl;

	scav.guardGate();
	scav.attack("Bouddha");
	scav.attack("Bouddha");
	scav.takeDamage(10);
	scav.beRepaired(20);
	scav.takeDamage(150);
	scav.takeDamage(80);
	scav.attack("Bouddha");
	scav.beRepaired(20);
	scav.attack("Bouddha");

	return (0);
}
