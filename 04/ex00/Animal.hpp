#ifndef ANIMAL_H
# define ANIMAL_H

#include <string>
#include <iostream>

class Animal {

	public:
		Animal ( void );
		Animal ( const Animal &copy );
		~Animal ( void );

		Animal &operator = ( const Animal &right );

		virtual void makeSound ( void ) const;

		void setType ( const std::string &type );
		const std::string getType ( void ) const;

	protected:
		std::string _type;
};

#endif
