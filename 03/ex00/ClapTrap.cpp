#include "ClapTrap.hpp"

ClapTrap::ClapTrap ( void ): _name(), _hp(10), _energy(10), _ad(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap ( std::string name ): _name(name), _hp(10), _energy(10), _ad(0) {
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::~ClapTrap ( void ) {
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack ( const std::string &target ) {
	if (this->getEnergy() > 0 && this->getHp() > 0)
	{
		this->_energy--;
		std::cout << "ClapTrap " << this->getName() << " attacks "
			<< target << ", causing " << this->getAd()  << " points of damage!" << std::endl;
	}
	else if (this->getEnergy() == 0)
		std::cout << "ClapTrap " << this->getName() << " is tired !" << std::endl;
	else
		std::cout << "ClapTrap " << this->getName() << " is wounded !" << std::endl;
}

void ClapTrap::takeDamage ( unsigned int amount ) {
	if (this->getHp() > 0)
	{
		this->_hp = (this->getHp() - (int)amount) < 1 ? 0 : (this->getHp() - (int)amount);
		if (this->getHp() == 0)
			std::cout << "ClapTrap " << this->getName() << " is wounded." << std::endl;
		else
			std::cout << "ClapTrap " << this->getName() << " has taken " << amount << " damage !"
				<< " Only " << this->getHp() << " remaining." << std::endl; 
	}
	else
		std::cout << "ClapTrap " << this->getName() << " is already wounded." << std::endl;
}

void ClapTrap::beRepaired ( unsigned int amount ) {
	if (this->getHp() < 10)
	{
		this->_hp = (this->_hp + (int)amount) > 10 ? 10 : (this->_hp + (int)amount);
		std::cout << "ClapTrap " << this->getName() << " has been repaired for "
			<< amount << " HP !" << " HP remaining : " << this->getHp() << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->getName() << " is full !" << std::endl;
}

void ClapTrap::setName ( std::string name ) {
	this->_name = name;
}

std::string ClapTrap::getName ( void ) {
	return (this->_name);
}

int ClapTrap::getHp ( void ) {
	return (this->_hp);
}

int ClapTrap::getEnergy ( void ) {
	return (this->_energy);
}

int ClapTrap::getAd ( void ) {
	return (this->_ad);
}
