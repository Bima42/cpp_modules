#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

#include "Zombie.hpp"

class ZombieHorde {

	private:
		int		_nb;

	public:
		ZombieHorde( void );
		~ZombieHorde( void );
		Zombie*	zombieHorde( int N, std::string name );
		void	announce( void );
		Zombie*	horde;
};

#endif
