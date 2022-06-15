#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>
#include <string>

class ClapTrap {

	public:
		ClapTrap ( void );
		ClapTrap ( const std::string name );
		ClapTrap ( const ClapTrap &copy );
		~ClapTrap ( void );

		void attack ( const std::string &target );
		void takeDamage ( unsigned int amount );
		void beRepaired ( unsigned int amount );

		int getEnergy ( void ) const;
		int getHp ( void ) const;
		int getHpBase ( void ) const;
		int getAd ( void ) const;
		std::string getName ( void ) const;
		std::string getType ( void ) const;

		void setHp ( unsigned int hp );
		void setAd ( unsigned int ad );
		void setEnergy ( unsigned int energy );
		void setName ( const std::string name );
		
		void useEnergy ( void );

	private:
		std::string _name;
		std::string _type;
		int _hp;
		int _energy;
		int _ad;
		int _hpBase;
};

#endif
