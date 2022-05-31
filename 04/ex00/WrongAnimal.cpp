#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal ( void ): _type() {
	std::cout << "WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal ( const WrongAnimal &copy ): _type(copy.getType()) {
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal ( void ) {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator = ( const WrongAnimal &right ) {
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    _type = right.getType();
	return (*this);
}

void WrongAnimal::makeSound ( void ) const {
	std::cout << "WrongAnimal " << _type << " : can't make sound !" << std::endl;
}

std::string WrongAnimal::getType ( void ) const {
	return (_type);
}
