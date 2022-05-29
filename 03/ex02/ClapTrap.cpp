#include "ClapTrap.hpp"

ClapTrap::ClapTrap ( void ): _name(), _hp(10), _energy(10), _ad(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap ( std::string name ): _name(name), _hp(10), _energy(10), _ad(0) {
	std::cout << "ClapTrap " << name << " is build."<< std::endl;
}

ClapTrap::ClapTrap ( const ClapTrap &copy ):_name(copy.getName()), 
											_hp(copy.getHp()),
											_energy(copy.getEnergy()),
											_ad(copy.getAd()) {
	std::cout << "ClapTrap " << this->getName() << " copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap ( void ) {
	std::cout << "ClapTrap " << this->getName() << " destructor called." << std::endl;
}

void ClapTrap::attack ( const std::string &target ) {
	if (this->getEnergy() > 0 && this->getHp() > 0)
	{
		useEnergy();
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
			std::cout << "ClapTrap " << this->getName() << " has been taken down !" << std::endl;
		else
			std::cout << "ClapTrap " << this->getName() << " has taken " << amount << " damage !"
				<< " Only " << this->getHp() << " remaining." << std::endl; 
	}
	else
		std::cout << "ClapTrap " << this->getName() << " is already wounded." << std::endl;
}

void ClapTrap::beRepaired ( unsigned int amount ) {
	if (this->getEnergy() > 0)
	{
		useEnergy();
		this->_hp = this->getHp() + amount;
		std::cout << "ClapTrap " << this->getName() << " has been repaired for "
			<< amount << " HP !" << " HP remaining : " << this->getHp() << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->getName() << " cannot be repaired anymore !" << std::endl;
}

void ClapTrap::setName ( std::string name ) {
	this->_name = name;
}

void ClapTrap::setHp ( unsigned int hp ) {
	this->_hp = hp;
}

void ClapTrap::setAd ( unsigned int ad ) {
	this->_ad = ad;
}

void ClapTrap::setEnergy ( unsigned int energy ) {
	this->_energy = energy;
}

std::string ClapTrap::getName ( void ) const {
	return (this->_name);
}

int ClapTrap::getHp ( void ) const {
	return (this->_hp);
}

int ClapTrap::getEnergy ( void ) const {
	return (this->_energy);
}

int ClapTrap::getAd ( void ) const {
	return (this->_ad);
}

void ClapTrap::useEnergy ( void ) {
	this->_energy--;
}
