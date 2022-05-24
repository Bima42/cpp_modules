#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

#include "Zombie.hpp"

class ZombieHorde {

	private:
		Zombie* _horde;
		int		_nb;

	public:
		ZombieHorde( void );
		ZombieHorde( int N );
		~ZombieHorde( void );
		void	announce( void );
};

#endif
