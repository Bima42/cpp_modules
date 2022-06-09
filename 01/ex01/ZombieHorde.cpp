#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde ( void )
{
	return;
}

ZombieHorde::~ZombieHorde ( void )
{
	return;
}

Zombie* ZombieHorde::zombieHorde ( int N, std::string name )
{
	int		i;
	Zombie*	horde;

	if (N <= 0)
	{
		std::cout << "Error: N is invalid. Default number of zombies will be 5." << std::endl;
		N = 5;
	}
	horde = new Zombie[N];
	_nb = N;
	i = -1;
	while (++i < N)
		horde[i].setName(name);
	return (horde);
}

// Using previous announce function using _horde (Zombie pointer)
void	ZombieHorde::announce ( void )
{
	int	i;

	i = -1;
	while (++i < _nb)
		horde[i].announce();
}
