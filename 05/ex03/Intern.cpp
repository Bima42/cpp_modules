#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

/* ==================================================================
**							CONSTRUCTOR								|
**							DESTRUCTOR								|
** ==================================================================
*/

Intern::Intern ( void ) {}

Intern::Intern ( const Intern &copy ) {
	*this = copy;
}

Intern::~Intern ( void ) {}



/* ==================================================================
**								OPERATOR							|
** ==================================================================
*/

Intern &Intern::operator = ( const Intern &right ) {
	return (*this);
}


/* ==================================================================
**								FUNCTIONS							|
** ==================================================================
*/

Form *Intern::makeForm ( const std::string name, const std::string target ) const {
	std::string form[3] = { "PresidentialForm",
						"ShrubberyForm",
						"RobotomyForm" };
	int i;
	for (i = 0; i < 3; ++i) {
		if (name == form[i])
			break ;
	}
	switch (i) {
		case 0: return (new Presidential(target));
		case 1: return (new Shrubbery(target));
		case 2: return (new Robotomy(target));
		default :
			std::cerr << "This Form name doesn't exist. Choose between PresidentialForm, ShrubberyForm or RobotomyForm. Thanks." << std::endl;
			return nullptr;
	}
}
