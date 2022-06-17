#include "FragTrap.hpp"

FragTrap::FragTrap ( void ): ClapTrap() {
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->setType("FragTrap");
	this->setHp(100);
	this->setHpBase(100);
	this->setEnergy(100);
	this->setAd(30);
}

FragTrap::FragTrap ( const std::string name ): ClapTrap(name) {
	std::cout << "FragTrap " << name << " is build." << std::endl;
	this->setName(name);
	this->setType("FragTrap");
	this->setHp(100);
	this->setHpBase(100);
	this->setEnergy(100);
	this->setAd(30);
}

FragTrap::FragTrap ( const FragTrap &copy ): ClapTrap(copy) {
	std::cout << "FragTrap " << this->getName() << " copy constructor called" << std::endl;
}

FragTrap::~FragTrap ( void ) {
	std::cout << "FragTrap " << this->getName() << " destructor called" << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap &right) {
	if (&right != this) {
		this->_name = right.getName();
		this->_type = right.getType();
		this->_hp = right.getHp();
		this->_energy = right.getEnergy();
		this->_ad = right.getAd();
		this->_hpBase = right.getHpBase();
	}
	return (*this);
}

void FragTrap::attack ( const std::string &target ) {
	if (this->getEnergy() > 0 && this->getHp() > 0)
	{
		this->useEnergy();
		std::cout << "FragTrap " << this->getName() << " hits "
			<< target << ", causing " << this->getAd()  << " damages. WOW." << std::endl;
	}
	else if (this->getEnergy() == 0)
		std::cout << "FragTrap " << this->getName() << " is sleeping ..." << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " is wounded :(" << std::endl;
}

void FragTrap::highFivesGuys ( void ) {
 	std::string ret;

	std::cout << "FragTrap " << this->getName() << " : High Fives ?" << std::endl;
    std::getline(std::cin, ret);
    if (std::cin.eof() || std::cin.bad() || ret.empty() || ret == "no" || ret == "n")
        std::cout << ":'(" << std::endl;
	else 
        std::cout << "Let's go!" << std::endl;
}
