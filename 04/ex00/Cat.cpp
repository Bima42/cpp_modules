#include "Cat.hpp"

Cat::Cat ( void ): Animal() {
	std::cout << "Cat Constructor Called" << std::endl;
	_type = "Cat";
}

Cat::Cat ( const Cat &copy ): Animal(copy) {
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat::~Cat ( void ) {
	std::cout << "Cat Destructor called" << std::endl;
}

Cat &Cat::operator = ( const Cat &right ) {
    std::cout << "Cat assignment operator called" << std::endl;
    _type = right.getType();
	return (*this);
}

void Cat::makeSound ( void ) const {
	std::cout << _type << ": Meoooow !" << std::endl;
}
