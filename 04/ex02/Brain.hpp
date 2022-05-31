#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>

class Brain {

	public:
		Brain ( void );
		Brain ( const Brain &copy );
		~Brain ( void );

		Brain &operator=( const Brain &right);

		void printIdeas ( void ) const;
		const std::string *getIdeas ( void ) const;

	private:
		std::string ideas[100];
};

#endif
