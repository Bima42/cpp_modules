#include "Weapon.hpp"

Weapon::Weapon ( void )
{
	_type = getType();
	return ;
}

Weapon::Weapon ( std::string type )
{
	_type = type;
	return ;
}

Weapon::~Weapon ( void )
{
	return ;
}

const std::string &Weapon::getType ( void )
{
	std::string &ref = _type;
	return (ref);
}

void	Weapon::setType ( std::string type )
{
	_type = type;
}
