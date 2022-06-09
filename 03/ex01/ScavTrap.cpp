#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( void ): ClapTrap() {
	std::cout << "🤖 Default ScavTrap constructor called" << std::endl;
	this->setHp(100);
	this->setEnergy(50);
	this->setAd(20);
}

ScavTrap::ScavTrap ( const std::string name ): ClapTrap(name) {
	std::cout << " 🤖 ScavTrap " << name << " is build." << std::endl;
	this->setName(name);
	this->setHp(100);
	this->setEnergy(50);
	this->setAd(20);
}

ScavTrap::ScavTrap ( const ScavTrap &copy ): ClapTrap(copy) {
	std::cout << "🤖 ScavTrap " << this->getName() << " copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap ( void ) {
	std::cout << "🤖 ScavTrap " << this->getName() << " destructor called" << std::endl;
}

void ScavTrap::attack ( const std::string &target ) {
	if (this->getEnergy() > 0 && this->getHp() > 0)
	{
		this->useEnergy();
		std::cout << "ScavTrap " << this->getName() << " attacks "
			<< target << ", causing " << this->getAd()  << " points of damage!" << std::endl;
	}
	else if (this->getEnergy() == 0)
		std::cout << "ScavTrap " << this->getName() << " is tired !" << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << " is wounded ! He cannot attack." << std::endl;
}

void ScavTrap::guardGate ( void ) {
	std::cout << "ScavTrap " << this->getName() << " : Mode Gate Keeper activated. 🛡" << std::endl;
}
