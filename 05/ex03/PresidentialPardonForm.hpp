#ifndef PRESIDENTIAL_PARDON_FORM_H
# define PRESIDENTIAL_PARDON_FORM_H

#include "Form.hpp"

class Presidential: public Form {

	public:
		Presidential ( const std::string target );
		Presidential ( const Presidential &copy );
		~Presidential ( void );

		Presidential &operator=( const Presidential &right );

		const std::string getTarget ( void ) const; 

		void execute ( Bureaucrat const & executor ) const;

		class BadOpenException: public std::exception {
			virtual const char* what() const throw();
		};

		class BadWriteException: public std::exception {
			virtual const char* what() const throw();
		};

	private:
		const std::string _target;
};

#endif
