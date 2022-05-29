#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap ( void ) {
	std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap ( const std::string name ): ClapTrap(name + "_clap_name") {
	std::cout << "DiamondTrap " << name << " is build." << std::endl;
	_name = name;
	this->setAd(30);
}

DiamondTrap::DiamondTrap ( const DiamondTrap &copy ): ClapTrap(copy) {
	std::cout << "DiamondTrap " << _name << " copy constructor called" << std::endl;
	_name = copy.getName();
	this->setAd(30);
}

DiamondTrap::~DiamondTrap ( void ) {
	std::cout << "DiamondTrap " << _name << " destructor called" << std::endl;
}

void DiamondTrap::attack ( const std::string &target ) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI ( void ) {
	std::cout << DiamondTrap::_name << " or " << ClapTrap::getName() << " ? " <<  std::endl;
}
