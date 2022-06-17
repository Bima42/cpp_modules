#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap diamond("Mammouth");

	std::cout << "--------------------" << std::endl;
	std::cout << "AD : " << diamond.getAd() << std::endl;
	std::cout << "Energy : " << diamond.getEnergy() << std::endl;
	std::cout << "HP : " << diamond.getHp() << std::endl;
	std::cout << "--------------------" << std::endl;
	diamond.guardGate();
	diamond.whoAmI();
	std::cout << "--------------------" << std::endl;
	diamond.attack("Yvan");
	diamond.takeDamage(20);
	std::cout << "--------------------" << std::endl;
	diamond.highFivesGuys();

	return (0);
}
