#include "WrongCat.hpp"

WrongCat::WrongCat ( void ): WrongAnimal() {
	std::cout << "WrongCat Constructor Called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat ( const WrongCat &copy ): WrongAnimal(copy) {
	std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::~WrongCat ( void ) {
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat &WrongCat::operator = ( const WrongCat &right ) {
    std::cout << "WrongCat assignment operator called" << std::endl;
    _type = right.getType();
	return (*this);
}

void WrongCat::makeSound ( void ) const {
	std::cout << _type << ": Weird Meoooow !" << std::endl;
}
