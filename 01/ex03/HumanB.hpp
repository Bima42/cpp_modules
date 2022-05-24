#ifndef HUMAN_B_H
# define HUMAN_B_H

# include "Weapon.hpp"

class HumanB {

	public:
		HumanB( void );
		HumanB( std::string name );
		~HumanB( void );
		Weapon		*weapon;
		std::string	name;
		void	attack ( void );
		void	setWeapon ( Weapon &weapon );
};

#endif
