#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

class Cure: public AMateria {
	
	public:
		Cure ( void );
		Cure ( const Cure &copy );
		virtual ~Cure ( void );

		Cure &operator=(const Cure &right);

		AMateria *clone ( void ) const;
};

#endif
