#ifndef ROBOTOMY_REQUEST_FORM_H
# define ROBOTOMY_REQUEST_FORM_H

#include "Form.hpp"
#include <cstdlib>

class Robotomy: public Form {

	public:
		Robotomy ( const std::string target );
		Robotomy ( const Robotomy &copy );
		virtual ~Robotomy ( void );

		Robotomy &operator=( const Robotomy &right );

		const std::string getTarget ( void ) const; 

		void execute ( Bureaucrat const & executor ) const;

	private:
		const std::string _target;
};

#endif
