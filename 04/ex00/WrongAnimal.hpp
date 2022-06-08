#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

#include <string>
#include <iostream>

class WrongAnimal {

	public:
		WrongAnimal ( void );
		WrongAnimal ( const WrongAnimal &copy );
		virtual ~WrongAnimal ( void );

		WrongAnimal &operator = ( const WrongAnimal &right );

		void makeSound ( void ) const;

		void setType ( const std::string &type );
		std::string getType ( void ) const;

	protected:
		std::string _type;
};

#endif
