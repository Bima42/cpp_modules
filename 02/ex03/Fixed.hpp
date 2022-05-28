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
		Fixed ( int value);
		Fixed ( float value);
		virtual ~Fixed ( void );

		Fixed &operator = (const Fixed &right);

		Fixed operator + (const Fixed &right) const;
		Fixed operator - (const Fixed &right) const;
		Fixed operator / (const Fixed &right) const;
		Fixed operator * (const Fixed &right) const;

		Fixed &operator ++ ( void ); // Pre-increment
		Fixed &operator -- ( void ); // Pre-decrement
		Fixed operator ++ ( int ); // Post-increment
		Fixed operator -- ( int ); // Post-decrement

		bool operator > (const Fixed &right) const;
		bool operator < (const Fixed &right) const;
		bool operator >= (const Fixed &right) const;
		bool operator <= (const Fixed &right) const;
		bool operator == (const Fixed &right) const;
		bool operator != (const Fixed &right) const;

		float toFloat ( void ) const;
		int toInt ( void ) const;

		int	getRawBits(void) const;
		void setRawBits(int raw);

		static Fixed &min ( Fixed &nb1, Fixed &nb2 );
		static Fixed &max ( Fixed &nb1, Fixed &nb2 );
		static const Fixed &min ( const Fixed &nb1, const Fixed &nb2 );
		static const Fixed &max ( const Fixed &nb1, const Fixed &nb2 );

};

std::ostream &operator << (std::ostream &out, const Fixed &fixe);

#endif
