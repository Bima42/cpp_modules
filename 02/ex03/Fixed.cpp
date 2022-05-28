#include "Fixed.hpp"

/* ===============================
**			CONSTRUCTOR          |
**			DESTRUCTOR           |
** ===============================
*/

// Default Constructor :
Fixed::Fixed ( void )
{
	this->_fixedNb = 0;
	return;
}


// Copy constructor :
Fixed::Fixed ( const Fixed &copy )
{
	this->_fixedNb = copy.getRawBits();
	return;
}


// Constructor using Int :
Fixed::Fixed ( const int value )
{
	this->_fixedNb = value << this->_fracBits;
	return;
}


// Constructor using Float :
Fixed::Fixed ( const float value )
{
	this->_fixedNb = (int)(roundf(value * (1 << this->_fracBits)));
	return;
}


//Destructor :
Fixed::~Fixed ( void )
{
	return ;
}

/* ===========================================
**					OPERATOR                  |
** ===========================================
*/

Fixed &Fixed::operator = ( const Fixed &right )
{
	if (this == &right)
		return (*this);

	this->_fixedNb = right.getRawBits();
	return (*this);
}

//================OPERATIONS====================

Fixed Fixed::operator / ( const Fixed &right ) const 
{
	return (Fixed(toFloat() / right.toFloat()));
}

Fixed Fixed::operator * ( const Fixed &right ) const 
{
	return (Fixed(toFloat() * right.toFloat()));
}

Fixed Fixed::operator + ( const Fixed &right ) const 
{
	return (Fixed(toFloat() + right.toFloat()));
}


Fixed Fixed::operator - ( const Fixed &right ) const 
{
	return (Fixed(toFloat() - right.toFloat()));
}

/* OTHER WAY
	Fixed ret;

	MINUS :

	ret.setRawBits(this->value - right.getRawBits());
	return (ret);

	PLUS : 
	ret.setRawBits(this->value + right.getRawBits());
	return (ret);

	MULTIPLE :
	ret.setRawBits((this->value * right.getRawBits()) >> this->_fracBits);
	return (ret);

	DIVISON :
	ret.setRawBits((this->value << this->_fracBits) / right.getRawBits());
	return (ret);
*/

//====================COMPARISON===================

bool Fixed::operator > ( const Fixed &right) const
{
	return (this->_fixedNb > right.getRawBits());
}

bool Fixed::operator < ( const Fixed &right) const
{
	return (this->_fixedNb < right.getRawBits());
}

bool Fixed::operator >= ( const Fixed &right) const
{
	return (this->_fixedNb >= right.getRawBits());
}

bool Fixed::operator <= ( const Fixed &right) const
{
	return (this->_fixedNb <= right.getRawBits());
}

bool Fixed::operator == ( const Fixed &right) const
{
	return (this->_fixedNb == right.getRawBits());
}

bool Fixed::operator != ( const Fixed &right) const
{
	return (this->_fixedNb != right.getRawBits());
}


//==================INC-DECREMENTATION===================

Fixed &Fixed::operator ++ ( void ) 
{
	this->_fixedNb++;
	return (*this);
}

Fixed &Fixed::operator -- ( void ) 
{
	this->_fixedNb--;
	return (*this);
}

Fixed Fixed::operator ++ ( int ) 
{
	Fixed ret(*this);
	this->operator++();
	return (ret);
}

Fixed Fixed::operator -- ( int ) 
{
	Fixed ret(*this);
	this->operator--();
	return (ret);
}


//=========================================================


/*=========================================================
**														  |
**					MEMBER FUNCTIONS					  |
**														  |
**=========================================================
*/

float Fixed::toFloat ( void ) const
{
	return ((float)this->_fixedNb / (float)(1 << this->_fracBits));
}


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

Fixed &Fixed::min ( Fixed &nb1, Fixed &nb2 )
{
	return (nb1 <= nb2 ? nb1 : nb2);
}

Fixed &Fixed::max ( Fixed &nb1, Fixed &nb2 )
{
	return (nb1 >= nb2 ? nb1 : nb2);
}

const Fixed &Fixed::min ( const Fixed &nb1, const Fixed &nb2 )
{
	return (nb1 <= nb2 ? nb1 : nb2);
}

const Fixed &Fixed::max ( const Fixed &nb1, const Fixed &nb2 )
{
	return (nb1 >= nb2 ? nb1 : nb2);
}

std::ostream &operator << (std::ostream &out, const Fixed &fixe)
{
	out << fixe.toFloat();
	return (out);
}
