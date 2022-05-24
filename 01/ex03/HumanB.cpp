#include "HumanB.hpp"

HumanB::HumanB ( void )
{
	return;
}

HumanB::HumanB ( std::string name )
{
	this->name = name;
	this->weapon = NULL;
	return;
}

HumanB::~HumanB ( void )
{
	return;
}

void	HumanB::attack ( void )
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon ( Weapon &weapon )
{
	this->weapon = &weapon;
}
