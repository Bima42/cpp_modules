#include "DiamondTrap.hpp"

int main( void )
{
	ClapTrap clap("Dude");
	ScavTrap scav("Bob");
	FragTrap frag("Michel");
	DiamondTrap diamond("Hybride");

	diamond.whoAmI();
	diamond.attack("Yvan");
	diamond.highFivesGuys();
	diamond.guardGate();
	std::cout << diamond.getAd() << std::endl;
	std::cout << diamond.getEnergy() << std::endl;
	std::cout << diamond.getHp() << std::endl;

	return (0);
}
