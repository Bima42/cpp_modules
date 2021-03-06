#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter {

	public:
		Character ( std::string name );
		Character ( const Character &copy );
		virtual ~Character ( void );

		Character &operator=( const Character &right );

		const std::string &getName ( void ) const;

		void equip ( AMateria *m );
		void unequip ( int idx );
		void use ( int idx, ICharacter &target );

	private:
		std::string _name;
		AMateria *_inventory[4];
};

#endif
