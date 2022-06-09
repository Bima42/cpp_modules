# include "Point.hpp"

/*	============================================
**					PROBLEM :
**	Find why this format cause compilation error
**		
**	Point::Point ( void ) 
**	{	
**		this->_x = 0;	
**		this->_y = 0;	
**	}	
**	=============================================		
*/

Point::Point ( void ): _x(), _y() {}

Point::~Point ( void ) {}

Point::Point ( const float x, const float y ): _x(x), _y(y) {} 

Point::Point ( const Point &copy ): _x(copy.getValueX()), _y(copy.getValueY()) {}

Point &Point::operator = ( const Point &right )
{
	(void)right;
	return (*this);
}

const Fixed &Point::getValueY ( void ) const
{
	return (_y);
}

const Fixed &Point::getValueX ( void ) const
{
	return (_x);
}

std::ostream &operator<<( std::ostream &out, const Point &right ) {
	out << "x: " << right.getValueX() << " | y: " << right.getValueY();
	return (out);
}
