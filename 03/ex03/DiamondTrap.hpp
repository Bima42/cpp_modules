#ifndef DIAMOND_TRAP_H
# define DIAMOND_TRAP_H

#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {

	public:
		DiamondTrap ( const std::string name );
		DiamondTrap ( const DiamondTrap &copy );
		virtual ~DiamondTrap ( void );

		DiamondTrap &operator=( const DiamondTrap &right );

		void attack ( const std::string &target );

		void whoAmI ( void );

	private:
		std::string _name;
};

#endif
