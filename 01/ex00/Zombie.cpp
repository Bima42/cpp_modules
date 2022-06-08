#include "Zombie.hpp"

Zombie::Zombie ( void ) : _type("default"), _name("Yvan")
{
	return;
}

Zombie::Zombie ( std::string name, std::string type) : _type(type), _name(name)
{
	return;
}

Zombie::~Zombie ( void ) 
{
	return;
}

void	Zombie::announce ( void )
{
	std::cout << _name << " [" << _type << "] :" << " BraiiiiiinnnzzzZ..." << std::endl;
}
