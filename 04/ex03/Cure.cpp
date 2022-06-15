#include "Cure.hpp"

AMateria *Cure::clone ( void ) const {
	return (new Cure());
}

Cure::Cure ( void ): AMateria("cure") {}

Cure::Cure ( const Cure &copy ): AMateria(copy) {}

Cure::~Cure ( void ) {}

Cure &Cure::operator=( const Cure &right ) {
	(void)right;
	return (*this);
}
