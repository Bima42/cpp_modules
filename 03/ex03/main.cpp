#include "DiamondTrap.hpp"

int main( void )
{
	ClapTrap clap("Dude");
	ScavTrap scav("Bob");
	FragTrap frag("Michel");
	DiamondTrap diamond("Hybride");

	diamond.whoAmI();
	std::cout << diamond.getAd() << std::endl;
	std::cout << diamond.getEnergy() << std::endl;
	std::cout << diamond.getHp() << std::endl;

	return (0);
}
