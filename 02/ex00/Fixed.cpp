#include "Fixed.hpp"

Fixed::Fixed ( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedNb = 0;
	return;
}

Fixed::Fixed ( const Fixed &copy )
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedNb = copy.getRawBits();
	return;
}

Fixed::~Fixed ( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator = ( const Fixed &op )
{
	std::cout << "Copy assignment operator called" << std::endl;
	// Protect autoaffectation
	if (this == &op)
		return (*this);

	this->_fixedNb = op.getRawBits();
	return (*this);
}

int	Fixed::getRawBits ( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedNb);
}

void Fixed::setRawBits ( int const raw )
{
	this->_fixedNb = raw;
	return ;
}
