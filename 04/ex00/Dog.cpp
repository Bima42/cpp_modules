#include "Dog.hpp"

Dog::Dog ( void ): Animal() {
	std::cout << "Dog Constructor Called" << std::endl;
	_type = "Dog";
}

Dog::Dog ( const Dog &copy ): Animal(copy) {
	std::cout << "Dog Copy Constructor Called" << std::endl;
	_type = copy.getType();;
}

Dog::~Dog ( void ) {
	std::cout << "Dog Destructor called" << std::endl;
}

Dog &Dog::operator = ( const Dog &right ) {
    std::cout << "Dog assignment operator called" << std::endl;
    _type = right.getType();
	return (*this);
}

void Dog::makeSound ( void ) const {
	std::cout << _type << ": Woof woof !" << std::endl;
}
