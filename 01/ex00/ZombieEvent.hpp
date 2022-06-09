#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

#include "Zombie.hpp"

class ZombieEvent {

	private:
		std::string _type;

	public:
		ZombieEvent();
		~ZombieEvent();
		Zombie* newZombie ( std::string name );
		void	randomChump ( std::string name );
		void	setZombieType ( std::string newType );
};

#endif
