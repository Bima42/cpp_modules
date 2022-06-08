#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {

	public:
		Cat ( void );
		Cat ( const Cat &copy );
		virtual ~Cat ( void );

		Cat &operator = ( const Cat &right );
		void makeSound ( void ) const;
		Brain *getBrain ( void ) const;

	private:
		Brain *_brain;
};

#endif
