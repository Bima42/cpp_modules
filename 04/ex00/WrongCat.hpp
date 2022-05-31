#ifndef WRONG_CAT_H
# define WRONG_CAT_H

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

	public:
		WrongCat ( void );
		WrongCat ( const WrongCat &copy );
		~WrongCat ( void );

		WrongCat &operator = ( const WrongCat &right );

		void makeSound ( void ) const;
};

#endif
