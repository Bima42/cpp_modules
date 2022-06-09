#include "Brain.hpp"

Brain::Brain ( void ) {
	std::cout << "Brain Constructor Called" << std::endl;
}

Brain::Brain ( const Brain &copy ) {
	std::cout << "Brain Copy Constructor Called" << std::endl;
	for (int i = 0; i < 100; i++) {
		ideas[i] = copy.ideas[i];
	}
}

Brain::~Brain ( void ) {
	std::cout << "Brain Destructor Called" << std::endl;
}

Brain &Brain::operator = ( const Brain &right ) {
	std::cout << "Brain assignment operator called" << std::endl;
	if (this == &right)
		return (*this);
	for (int i = 0; i < 100; i++) {
		ideas[i] = right.ideas[i];
	}
	return (*this);
}

std::string *Brain::getIdeas ( void ) {
	return ideas;
}

void Brain::printIdeas ( void ) const {
	for (int i = 0; i < 100; i++) {
		std::cout << ideas[i] << std::endl;
	}
}
