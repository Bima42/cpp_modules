#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point {

	private:
		const Fixed _x;
		const Fixed _y;

	public:
		Point ( void );
		Point ( float x, float y );
		Point ( const Point &copy );
		Point &operator = (const Point &right );
		virtual ~Point ( void );

		const Fixed &getValueY ( void ) const;
		const Fixed &getValueX ( void ) const;
};

#endif
