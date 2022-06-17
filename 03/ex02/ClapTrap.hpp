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

		ClapTrap &operator=( const ClapTrap &right );

		void attack ( const std::string &target );
		void takeDamage ( unsigned int amount );
		void beRepaired ( unsigned int amount );

		std::string getName ( void ) const;
		std::string getType ( void ) const;
		int getHp ( void ) const;
		int getHpBase ( void ) const;
		int getEnergy ( void ) const;
		int getAd ( void ) const;

		void setName ( const std::string name );
		void setType ( std::string type );
		void setHp ( unsigned int hp );
		void setHpBase ( unsigned int base );
		void setEnergy ( unsigned int energy );
		void setAd ( unsigned int ad );
		
		void useEnergy ( void );

	protected:
		std::string _name;
		std::string _type;
		int _hp;
		int _hpBase;
		int _energy;
		int _ad;
};

#endif
