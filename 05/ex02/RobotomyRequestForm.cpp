#include "RobotomyRequestForm.hpp"

/* ==============================================================================
**									CONSTRUCTOR									|
**									DESTRUCTOR									|
** ==============================================================================
*/

Robotomy::Robotomy ( const std::string target ): Form("RobotomyForm", 72, 45),
																_target(target) {}

Robotomy::Robotomy ( const Robotomy &copy ): Form(copy), _target(copy.getTarget()) {}

Robotomy::~Robotomy ( void ) {}


/* ==============================================================================
**									OPERATORS									|
** ==============================================================================
*/

Robotomy &Robotomy::operator = ( const Robotomy &right ) {
	(void)right;
	return (*this);
}


/* ==============================================================================
**									FUNCTIONS									|
** ==============================================================================
*/

const std::string Robotomy::getTarget ( void ) const {
	return (_target);
}


void Robotomy::execute ( Bureaucrat const & executor ) const {
	(void)executor;
	srand (time(NULL));
	std::cout << "🤖 BRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR" << std::endl;
	if (rand() % 2) // OR (rand() % 100 > 50)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		std::cout << _target << " robotomization failed" << std::endl;
}
