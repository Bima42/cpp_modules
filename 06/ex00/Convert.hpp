#ifndef CONVERT_H
# define CONVERT_H

# include <iostream>
# include <iomanip>
# include <string>
# include <math.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <cctype>

class Convert {

	public:
		Convert ( void );
		Convert ( const Convert &copy );
		virtual ~Convert ( void );

		Convert &operator=( const Convert &right );

		std::string getType ( std::string arg ) const;

		void display ( char c ) const;
		void display ( int i ) const;
		void display ( float f ) const;
		void display ( double d ) const;
		void display ( void ) const;
		void display ( std::string arg ) const;

		void execution ( Convert convert, char *argv ) const;
};

long	ft_stol(const std::string &str);
int		ft_stoi(const std::string &str);
double	ft_stod(const std::string &str);

#endif
