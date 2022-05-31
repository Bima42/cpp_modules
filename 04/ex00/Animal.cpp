#include "Animal.hpp"

Animal::Animal ( void ): _type() {
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal ( const Animal &copy ): _type(copy.getType()) {
	std::cout << "Animal Copy Constructor Called" << std::endl;
}

Animal::~Animal ( void ) {
	std::cout << "Animal Destructor called" << std::endl;
}

Animal &Animal::operator = ( const Animal &right ) {
    std::cout << "Animal assignment operator called" << std::endl;
    _type = right.getType();
	return (*this);
}

void Animal::makeSound ( void ) const {
	std::cout << "Animal :" << _type << " can't make sound" << std::endl;
}

void Animal::setType ( const std::string &type ) {
	_type = type;
}

const std::string Animal::getType ( void ) const {
	return (_type);
}
