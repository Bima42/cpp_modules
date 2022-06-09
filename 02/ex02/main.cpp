#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( 5.05f );

	std::cout << "===== Value of C =====" << std::endl;
	std::cout << c << std::endl;
	std::cout << std::endl;

	std::cout << "===== Value of A =====" << std::endl;
	std::cout << a << std::endl;
	std::cout << std::endl;

	std::cout << "===== Preincrement A =====" << std::endl;
	std::cout << ++a << std::endl;
	std::cout << std::endl;

	std::cout << "===== Value of A =====" << std::endl;
	std::cout << a << std::endl;
	std::cout << std::endl;

	std::cout << "===== Postincrement A =====" << std::endl;
	std::cout << a++ << std::endl;
	std::cout << std::endl;

	std::cout << "===== Value of A =====" << std::endl;
	std::cout << a << std::endl;
	std::cout << std::endl;

	std::cout << "===== Value of B =====" << std::endl;
	std::cout << b << std::endl;
	std::cout << std::endl;

	std::cout << "===== Max ( a, b ) =====" << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << std::endl;

	std::cout << "===== Min ( a, b ) =====" << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << std::endl;

	return (0);
}
