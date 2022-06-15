#ifndef MATERIA_SOURCE_H
# define MATERIA_SOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {

	public:
		MateriaSource ( void );
		MateriaSource ( const MateriaSource &copy );
		virtual ~MateriaSource ( void );

		MateriaSource &operator=( const MateriaSource &right );

		void learnMateria ( AMateria *m);
		AMateria *createMateria ( std::string const &type );

	private:
		std::string _names[4];
		AMateria *_materias[4];
};

#endif
