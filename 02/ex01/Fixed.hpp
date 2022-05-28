#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {

	private:
		int _fixedNb;
		static const int _fracBits = 8;

	public:
		Fixed ( void );
		Fixed ( const Fixed &copy);
		Fixed ( const int value);
		Fixed ( const float value);
		~Fixed ( void );

		Fixed &operator = (const Fixed &op);

		float toFloat ( void ) const;
		int toInt ( void ) const;

		int	getRawBits(void) const;
		void setRawBits(int const raw);

};

std::ostream &operator << (std::ostream &out, const Fixed &fixe);

#endif
