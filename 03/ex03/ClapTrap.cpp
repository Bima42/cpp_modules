#include "ClapTrap.hpp"

/* ========================================================================
 *                                                                        |
 *                           CONSTRUCTOR/DESTRUCTOR                       |
 *                                                                        |
 * ========================================================================
 */

ClapTrap::ClapTrap ( void ): _name(), _type("ClapTrap"), _hp(10), _hpBase(10), _energy(10), _ad(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap ( std::string name ): _name(name), _type("ClapTrap"), _hp(10), _hpBase(10), _energy(10), _ad(0) {
	std::cout << "ClapTrap " << name << " is build."<< std::endl;
}

ClapTrap::ClapTrap ( const ClapTrap &copy ):_name(copy.getName()),
											_type(copy.getType()),
											_hp(copy.getHp()),
											_hpBase(copy.getHpBase()), 
											_energy(copy.getEnergy()),
											_ad(copy.getAd()) {
	std::cout << "ClapTrap " << this->getName() << " copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap ( void ) {
	std::cout << "ClapTrap " << this->getName() << " destructor called." << std::endl;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &right ) {
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

/* ========================================================================
 *                                                                        |
 *                               FUNCTIONS                                |
 *                                                                        |
 * ========================================================================
 */

void ClapTrap::attack ( const std::string &target ) {
	if (this->_energy > 0 && this->_hp > 0)
	{
		useEnergy();
		std::cout << this->getType() << " " << this->getName() << " attacks "
			<< target << ", causing " << this->getAd()  << " points of damage!" << std::endl;
	}
	else if (this->_energy == 0)
		std::cout << this->getType() << " " << this->getName() << " is tired !" << std::endl;
}

void ClapTrap::takeDamage ( unsigned int amount ) {
	if (this->_hp > 0)
	{
		this->_hp = (this->_hp - (int)amount) < 1 ? 0 : (this->getHp() - (int)amount);
		if (this->_hp == 0)
			std::cout << this->getType() << " " << this->getName() << " has been taken down !" << std::endl;
		else
		{
			std::cout << this->getType() << " " << this->getName() << " has taken " << amount << " damage !"
				<< " Only " << this->_hp << " remaining." << std::endl; 
		}
	}
	else
		std::cout << this->getType() << " " << this->getName() << " is already wounded." << std::endl;
}

void ClapTrap::beRepaired ( unsigned int amount ) {
	if (this->getEnergy() > 0)
	{
		useEnergy();
		this->_hp = (this->_hp + (int)amount) > this->getHpBase() ? this->getHpBase() : (this->_hp + (int)amount);
		std::cout << this->getType() << " " << this->getName() << " has been repaired for "
			<< amount << " HP !" << " HP remaining : " << this->_hp << std::endl;
	}
	else
		std::cout << this->getType() << " " << this->getName() << " cannot be repaired anymore !" << std::endl;
}

void ClapTrap::useEnergy ( void ) {
	this->_energy--;
}


/* ========================================================================
 *                                                                        |
 *                               GETTER/SETTER                            |
 *                                                                        |
 * ========================================================================
 */


void ClapTrap::setName ( std::string name ) {
	this->_name = name;
}

void ClapTrap::setType ( std::string type ) {
	this->_type = type;
}

void ClapTrap::setHp ( unsigned int hp ) {
	this->_hp = hp;
}

void ClapTrap::setHpBase ( unsigned int base ) {
	this->_hpBase = base;
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

std::string ClapTrap::getType ( void ) const {
	return (this->_type);
}

int ClapTrap::getHp ( void ) const {
	return (this->_hp);
}

int ClapTrap::getHpBase ( void ) const {
	return (this->_hpBase);
}

int ClapTrap::getEnergy ( void ) const {
	return (this->_energy);
}

int ClapTrap::getAd ( void ) const {
	return (this->_ad);
}
