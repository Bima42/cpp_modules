#include "Fixed.hpp"

// Default Constructor :
Fixed::Fixed ( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedNb = 0;
	return;
}


// Copy constructor :
Fixed::Fixed ( const Fixed &copy )
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedNb = copy.getRawBits();
	return;
}


// Constructor using Int :
Fixed::Fixed ( const int value )
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedNb = value << this->_fracBits;
	return;
}


// Constructor using Float :
Fixed::Fixed ( const float value )
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedNb = (int)(roundf(value * (1 << this->_fracBits)));
	return;
}


//Destructor :
Fixed::~Fixed ( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator=( const Fixed &op )
{
	std::cout << "Copy assignment operator called" << std::endl;
	// Protect autoaffectation
	if (this == &op)
		return (*this);

	this->_fixedNb = op.getRawBits();
	return (*this);
}


// toFloat : convert value of _fixedNb to float
float Fixed::toFloat ( void ) const
{
	return ((float)this->_fixedNb / (float)(1 << this->_fracBits));
}

// toInt : convert value of _fixedNb to int
int Fixed::toInt ( void ) const
{
	return ((int)(this->_fixedNb >> this->_fracBits));
}

int	Fixed::getRawBits ( void ) const
{
	return (this->_fixedNb);
}

void Fixed::setRawBits ( int const raw )
{
	this->_fixedNb = raw;
	return ;
}

std::ostream &operator << (std::ostream &out, const Fixed &fixe)
{
	out << fixe.toFloat();
	return (out);
}
