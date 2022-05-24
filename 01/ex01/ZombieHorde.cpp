#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde ( void )
{
	return;
}

ZombieHorde::~ZombieHorde ( void )
{
	delete [] _horde;
	return;
}

ZombieHorde::ZombieHorde ( int N )
{
	std::string pool[9] = {"Moustache", "Saucisse", "Yvan", "Dirty", "Jean-Bate", "Barney", "Duboulow", "Djodjo", "Edjie"};
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
		_horde[i].setName(pool[rand() % 9]);
}

// Using previous announce function using _horde (Zombie pointer)
void	ZombieHorde::announce ( void )
{
	int	i;

	i = -1;
	while (++i < _nb)
		_horde[i].announce();
}
