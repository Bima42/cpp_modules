#include "MateriaSource.hpp"

MateriaSource::MateriaSource ( void ): _names(), _materias() {}

MateriaSource::MateriaSource ( const MateriaSource &copy ) {
	for (int i = 0; i < 4; i++) {
		if (copy._materias[i] != NULL) 
		{
			_names[i] = copy._materias[i]->getType();
			_materias[i] = copy._materias[i]->clone();
		}
	}
}

MateriaSource::~MateriaSource ( void ) { 
	for (int i = 0; i < 4; i++) {
		if (_materias[i] != NULL)
			delete _materias[i];
	}
}

MateriaSource &MateriaSource::operator=( const MateriaSource &right ) {
	if (&right != this) 
	{
		for (int i = 0; i < 4; i++) {
			if (_materias[i] != NULL)
				delete _materias[i];
			_materias[i] = NULL;
			_names[i] = "";
			if (right._materias[i] != NULL)
			{
				_names[i] = right._materias[i]->getType();
				_materias[i] = right._materias[i]->clone();
			}
		}
	}
	return (*this);
}

void MateriaSource::learnMateria ( AMateria *m ) {
	bool learned = false;

	for (int i = 0; i < 4; i++) {
		if (_materias[i] == NULL)
		{
			_materias[i] = m;
			_names[i] = m->getType();
			learned = true;
			break;
		}
	}

	if (learned == false)
		std::cout << "Materia was not learned, Materia stock is full" << std::endl;
}

AMateria *MateriaSource::createMateria ( std::string const &type ) {
	for (int i = 0; i < 4; i++) {
		if (_names[i] == type)
			return (_materias[i]->clone());
	}
	return (NULL);
}
