#ifndef A_MATERIA_H
# define A_MATERIA_H

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria {
	
	protected:
		std::string _type;

	public:
		AMateria ( void );
		AMateria ( const std::string &type );
		AMateria ( const AMateria &copy );
		virtual ~AMateria ( void );

		AMateria &operator=( const AMateria &right );

		const std::string &getType ( void ) const;

		virtual AMateria *clone ( void ) const = 0;
		virtual void use ( ICharacter &target );
};

#endif
