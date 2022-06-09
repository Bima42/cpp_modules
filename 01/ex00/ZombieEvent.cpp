#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent ( void ) : _type("default")
{
	return;
}

ZombieEvent::~ZombieEvent ( void )
{
	return;
}

Zombie* ZombieEvent::newZombie ( std::string name )
{
	return (new Zombie(name, _type)); // heap allocation
}

void	ZombieEvent::setZombieType ( std::string newType )
{
	_type = newType;
}

void	ZombieEvent::randomChump ( std::string name )
{
	Zombie toto(name, _type); // stack allocation
	toto.announce();
	return;
}
