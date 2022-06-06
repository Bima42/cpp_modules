#ifndef CONVERT_H
# define CONVERT_H

# include <iostream>
# include <iomanip>
# include <string>
# include <math.h>
# include <limits.h>

class Convert {

	public:
		Convert ( void );
		Convert ( const Convert &copy );
		~Convert ( void );

		Convert &operator=( const Convert &right );

		std::string getType ( std::string arg ) const;

		void display ( char c ) const;
		void display ( int i ) const;
		void display ( float f ) const;
		void display ( double d ) const;

		void execution ( Convert convert, char *argv ) const;
};

#endif