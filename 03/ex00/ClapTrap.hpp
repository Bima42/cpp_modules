#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>
#include <string>

class ClapTrap {

	public:
		ClapTrap ( void );
		ClapTrap ( std::string name );
		~ClapTrap ( void );

		void attack ( const std::string &target );
		void takeDamage ( unsigned int amount );
		void beRepaired ( unsigned int amount );

		int getEnergy ( void );
		int getHp ( void );
		int getAd ( void );
		void setName ( std::string name );
		std::string getName ( void );

	private:
		std::string _name;
		unsigned int _hp;
		unsigned int _energy;
		unsigned int _ad;
};

#endif
