#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class Ice: public AMateria {
	
	public:
		Ice ( void );
		Ice ( const Ice &copy );
		virtual ~Ice ( void );

		Ice &operator=(const Ice &right);

		AMateria *clone ( void ) const;
};

#endif
