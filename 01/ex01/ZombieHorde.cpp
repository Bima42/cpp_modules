#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde ( void )
{
	return;
}

// Delete _horde when destroyed
ZombieHorde::~ZombieHorde ( void )
{
	delete [] _horde;
	return;
}

Zombie* ZombieHorde::zombieHorde ( int N, std::string name )
{
	int	i;

	if (N <= 0)
	{
		std::cout << "Error: N is invalid. Default number of zombies will be 5." << std::endl;
		N = 5;
	}
	_horde = new Zombie[N];
	_nb = N;
	i = -1;
	while (++i < N)
		_horde[i].setName(name);
	return (&(_horde[0]));
}

// Using previous announce function
void	ZombieHorde::announceHorde ( Zombie* ptr )
{
	int	i;

	i = -1;
	while (++i < _nb)
		ptr[i].announce();
}
