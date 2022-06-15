#include "AMateria.hpp"

AMateria::AMateria ( void ) {}

AMateria::AMateria ( const std::string &type ): _type(type) {}

AMateria::AMateria ( const AMateria &copy ): _type(copy.getType()) {}

AMateria::~AMateria ( void ) {}

AMateria &AMateria::operator = ( const AMateria &right ) {
	if (&right != this)
		this->_type = right.getType();
	return (*this);
}

const std::string &AMateria::getType ( void ) const { return (this->_type); }

void AMateria::use ( ICharacter &target ) {
	if (_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
