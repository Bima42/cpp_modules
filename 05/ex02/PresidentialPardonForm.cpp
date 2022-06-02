#include "PresidentialPardonForm.hpp"

/* ==============================================================================
**									CONSTRUCTOR									|
**									DESTRUCTOR									|
** ==============================================================================
*/

Presidential::Presidential ( const std::string target ): Form("PresidentialForm", 25, 5),
																_target(target) {}

Presidential::Presidential ( const Presidential &copy ): Form(copy), _target(copy.getTarget()) {}

Presidential::~Presidential ( void ) {}


/* ==============================================================================
**									OPERATORS									|
** ==============================================================================
*/

Presidential &Presidential::operator = ( const Presidential &right ) {
	return (*this);
}


/* ==============================================================================
**									FUNCTIONS									|
** ==============================================================================
*/

const std::string Presidential::getTarget ( void ) const {
	return (_target);
}


void Presidential::execute ( Bureaucrat const & executor ) const {
	std::cout << _target << " was forgiven by Zaphob Beeblebrox" << std::endl;
}
