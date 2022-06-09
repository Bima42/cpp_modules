#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {

	private:
		std::string _type;
		std::string _name;

	public:
		Zombie();
		Zombie(std::string type, std::string _name);
		~Zombie();

		void announce ( void );
		std::string getName ( void ) const;
};

#endif
