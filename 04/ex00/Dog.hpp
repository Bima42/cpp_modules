#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog: public Animal {

	public:
		Dog ( void );
		Dog ( const Dog &copy );
		virtual ~Dog ( void );

		Dog &operator = ( const Dog &right );

		void makeSound ( void ) const;
};

#endif
