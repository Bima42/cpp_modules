#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

	public:
		ScavTrap ( void );
		ScavTrap ( const std::string name );
		ScavTrap ( const ScavTrap &copy );
		~ScavTrap ( void );

		void attack ( const std::string &target );
		void guardGate ( void );
};

#endif