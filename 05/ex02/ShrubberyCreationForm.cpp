#include "ShrubberyCreationForm.hpp"

/* ==============================================================================
**									CONSTRUCTOR									|
**									DESTRUCTOR									|
** ==============================================================================
*/

Shrubbery::Shrubbery ( const std::string target ): Form("ShrubberyForm", 145, 137),
																_target(target) {}

Shrubbery::Shrubbery ( const Shrubbery &copy ): Form(copy), _target(copy.getTarget()) {}

Shrubbery::~Shrubbery ( void ) {}


/* ==============================================================================
**									OPERATORS									|
** ==============================================================================
*/

Shrubbery &Shrubbery::operator = ( const Shrubbery &right ) {
	return (*this);
}


/* ==============================================================================
**									FUNCTIONS									|
** ==============================================================================
*/

const std::string Shrubbery::getTarget ( void ) const {
	return (_target);
}

void Shrubbery::execute ( Bureaucrat const & executor ) const {
	std::ofstream file(_target + "_shrubbery");

	file << "Couille" << std::endl;
	file.close();
}
