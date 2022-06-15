#include "Ice.hpp"

AMateria *Ice::clone ( void ) const {
	return (new Ice());
}

Ice::Ice ( void ): AMateria("ice") {}

Ice::Ice ( const Ice &copy ): AMateria(copy) {}

Ice::~Ice ( void ) {}

Ice &Ice::operator=( const Ice &right ) {
	(void)right;
	return (*this);
}
