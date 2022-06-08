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

void	ZombieEvent::randomChump ( void )
{
	int	i;
	std::string namePool[9] = {"Moustache", "Saucisse", "Yvan", "Dirty", "Jean-Bate", "Barney", "Duboulow", "Djodjo", "Edjie"};

	i = rand() % 9; // Pick index between 0 and 9
	Zombie toto(namePool[i], _type); // stack allocation
	toto.announce();
	return;
}
