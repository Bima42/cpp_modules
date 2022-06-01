#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.hpp"

class Form {

	private:
		const std::string	_name;
		bool 				_signed;
		const int			_signGrade;
		const int			_executeGrade;

	public:
		Form (const std::string name, int sign, int execute);
		Form ( const Form &copy );
		~Form ( void );

		Form &operator=( const Form &right );

		void beSigned ( Bureaucrat &bureaucrat );
		const std::string getName ( void ) const;
		const int getSignGrade ( void ) const;
		const int getExecuteGrade ( void ) const;
		bool isSigned ( void );

		class GradeTooHighException: public std::exception {
			virtual const char*  what() const throw();
		};

		class GradeTooLowException: public std::exception {
			virtual const char*  what() const throw();
		};
};

std::ostream &operator<< ( std::ostream &out, const Form &right );

#endif
