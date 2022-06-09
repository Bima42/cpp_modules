#include "ShrubberyCreationForm.hpp"

const std::string Shrubbery::_tree =
"                                                         .\n"
"                                              .         ;  \n"
"                 .              .              ;%     ;;   \n"
"                   ,           ,                :;%  %;   \n"
"                    :         ;                   :;%;'     .,   \n"
"          ,.        %;     %;            ;        %;'    ,;\n"
"             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
"              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
"               ;%;      %;        ;%;        % ;%;  ,%;'\n"
"               `%;.     ;%;     %;'         `;%%;.%;'\n"
"                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
"                    `:%;.  :;bd%;          %;@%;'\n"
"                      `@%:.  :;%.         ;@@%;'   \n"
"                        `@%.  `;@%.      ;@@%;         \n"
"                          `@%%. `@%%    ;@@%;        \n"
"                            ;@%. :@%%  %@@%;       \n"
"                              %@bd%%%bd%%:;     \n"
"                                #@%%%%%:;;\n"
"                                %@@%%%::;\n"
"                                %@@@%(o);  . '         \n"
"                                %@@@o%;:(.,'         \n"
"                            `.. %@@@o%::;         \n"
"                               `)@@@o%::;         \n"
"                                %@@(o)::;        \n"
"                               .%@@@@%::;         \n"
"                               ;%@@@@%::;.          \n"
"                              ;%@@@@%%:;;;. \n"
"                          ...;%@@@@@%%:;;;;,..    \n";

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
	(void)right;
	return (*this);
}


/* ==============================================================================
**									FUNCTIONS									|
** ==============================================================================
*/

const std::string Shrubbery::getTarget ( void ) const {
	return (_target);
}

const std::string Shrubbery::getTree ( void ) const {
	return (_tree);
}

void Shrubbery::execute ( Bureaucrat const & executor ) const {
	(void)executor;
	std::ofstream file(_target + "_shrubbery");

	if (!file.is_open() || file.bad())
		throw Shrubbery::BadOpenException();

	file << _tree << std::endl;
	if (file.bad())
	{
		file.close();
		throw Shrubbery::BadWriteException();
	}
	file.close();
}


/* ==============================================================================
**									EXCEPTIONS									|
** ==============================================================================
*/

const char* Shrubbery::BadOpenException::what ( void ) const throw() {
	return ("OpenException : open file failed");
}

const char* Shrubbery::BadWriteException::what ( void ) const throw() {
	return ("WriteException : write file failed");
}
