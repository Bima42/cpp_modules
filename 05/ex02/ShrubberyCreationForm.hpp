#ifndef SHRUBBERY_CREATION_FORM_H
# define SHRUBBERY_CREATION_FORM_H

#include "Form.hpp"

class Shrubbery: public Form {

	public:
		Shrubbery ( const std::string target );
		Shrubbery ( const Shrubbery &copy );
		~Shrubbery ( void );

		Shrubbery &operator=( const Shrubbery &right );

		const std::string getTarget ( void ) const; 

		void execute ( Bureaucrat const & executor ) const;

	private:
		const std::string _target;
};

#endif
