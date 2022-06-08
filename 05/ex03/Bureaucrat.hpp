#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <exception>
# include <iostream>
# include <fstream>
# include <string>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat {

	private:
		const std::string _name;
		int _grade;

	public:
		Bureaucrat ( const std::string name, int grade );
		Bureaucrat ( const Bureaucrat &copy );
		virtual ~Bureaucrat ( void );

		Bureaucrat &operator=( const Bureaucrat &right );

		const std::string getName ( void ) const;
		int getGrade ( void ) const;

		void downGrade ( void );
		void upGrade ( void );
		void signForm( Form &form ) const;

		void executeForm ( const Form &form ) const;

//		les classes d’exception n’ont pas à se conformer à la forme canonique de Coplien.

		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream &operator<<( std::ostream &out, const Bureaucrat &bureaucrat );

#endif
