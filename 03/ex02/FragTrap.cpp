#include "FragTrap.hpp"

FragTrap::FragTrap ( void ): ClapTrap() {
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->setHp(100);
	this->setEnergy(100);
	this->setAd(30);
}

FragTrap::FragTrap ( const std::string name ): ClapTrap(name) {
	std::cout << "FragTrap " << name << " is build." << std::endl;
	this->setName(name);
	this->setHp(100);
	this->setEnergy(100);
	this->setAd(30);
}

FragTrap::FragTrap ( const FragTrap &copy ): ClapTrap(copy) {
	std::cout << "FragTrap " << this->getName() << " copy constructor called" << std::endl;
}

FragTrap::~FragTrap ( void ) {
	std::cout << "FragTrap " << this->getName() << " destructor called" << std::endl;
}

void FragTrap::attack ( const std::string &target ) {
	if (this->getEnergy() > 0 && this->getHp() > 0)
	{
		this->useEnergy();
		std::cout << "FragTrap " << this->getName() << " attacks "
			<< target << ", causing " << this->getAd()  << " points of damage!" << std::endl;
	}
	else if (this->getEnergy() == 0)
		std::cout << "FragTrap " << this->getName() << " is tired !" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " is wounded ! He cannot attack." << std::endl;
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
