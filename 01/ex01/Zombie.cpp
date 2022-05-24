#include "Zombie.hpp"

Zombie::Zombie ( void ) :  _name("Yvan")
{
	return;
}

Zombie::Zombie ( std::string name ) : _name(name)
{
	return;
}

Zombie::~Zombie ( void ) 
{
	return;
}

void	Zombie::announce ( void )
{
	std::cout << _name << ": " << " BraiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName ( std::string name)
{
	_name = name;
}
