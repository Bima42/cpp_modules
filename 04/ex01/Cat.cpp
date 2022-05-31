#include "Cat.hpp"

Cat::Cat ( void ): Animal(), _brain(new Brain) {
	std::cout << "Cat Constructor Called" << std::endl;
	_type = "Cat";
}

Cat::Cat ( const Cat &copy ): Animal(copy), _brain(new Brain(*copy.getBrain())) {
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat::~Cat ( void ) {
	std::cout << "Cat Destructor called" << std::endl;
	delete _brain;
}

Cat &Cat::operator = ( const Cat &right ) {
    std::cout << "Cat assignment operator called" << std::endl;
	if (&right != this)
	{
    	_type = right.getType();
		delete _brain;
		_brain = new Brain(*right.getBrain());
	}
	return (*this);
}

void Cat::makeSound ( void ) const {
	std::cout << _type << ": Meoooow !" << std::endl;
}

Brain *Cat::getBrain ( void ) const {
	return (_brain);
}
