#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include "ScavTrap.hpp"

class FragTrap: virtual public ClapTrap {

	public:
		FragTrap ( void );
		FragTrap ( const std::string name );
		FragTrap ( const FragTrap &copy );
		virtual ~FragTrap ( void );

		void attack ( const std::string &target );

		void highFivesGuys ( void );
};

#endif
