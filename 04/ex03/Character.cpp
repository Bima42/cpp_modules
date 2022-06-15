#include "Character.hpp"

Character::Character ( std::string name ): _name(name), _inventory() {}

Character::Character ( const Character &copy ) {
	_name = copy.getName();
	for (int i = 0; i < 4; i++) {
		_inventory[i] = copy._inventory[i]->clone();
	}
}

Character::~Character ( void ) {
	for (int i = 0; i < 4; i++) {
		delete _inventory[i];
	}
}

Character &Character::operator = (const Character &right) {
	if (&right != this)
	{
		_name = right.getName();
		for (int i = 0; i < 4; i++) {
			if (_inventory[i] != NULL)
				delete _inventory[i];
			_inventory[i] = NULL;
			if (right._inventory[i] != NULL)
				_inventory[i] = right._inventory[i]->clone();
		}
	}
	return (*this);
}

const std::string &Character::getName ( void ) const {
	return (this->_name);
}

void Character::equip ( AMateria *m ) {
	for (int i = 0; i < 4; i++) {
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break;
		}
	}
}

void Character::unequip ( int idx ) {
	if (idx >= 0 && idx <= 3)
		_inventory[idx] = NULL;
}

void Character::use ( int idx, ICharacter &target ) {
	if (idx >= 0 && idx <= 3) {
		if (_inventory[idx] != NULL) {
			_inventory[idx]->use(target);
		}
	}
	else
		std::cout << "No Materia was used, index is wrong" << std::endl;
}
