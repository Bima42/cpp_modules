#include "Dog.hpp"

Dog::Dog ( void ): Animal(), _brain(new Brain) {
	std::cout << "Dog Constructor Called" << std::endl;
	_type = "Dog";
}

Dog::Dog ( const Dog &copy ): Animal(copy), _brain(new Brain(*copy.getBrain())) {
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog::~Dog ( void ) {
	std::cout << "Dog Destructor called" << std::endl;
	delete _brain;
}

Dog &Dog::operator = ( const Dog &right ) {
    std::cout << "Dog assignment operator called" << std::endl;
	if (&right != this)
	{
    	_type = right.getType();
		delete _brain;
		_brain = new Brain(*right.getBrain());
	}
	return (*this);
}

void Dog::makeSound ( void ) const {
	std::cout << _type << ": Woof woof !" << std::endl;
}

Brain *Dog::getBrain ( void ) const {
	return (_brain);
}
