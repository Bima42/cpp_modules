#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;

    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed const L( Fixed( 1 ) * Fixed( 2 ) );

    std::cout << "State of a : " << a << std::endl;
    std::cout << "Pre increment on a" << std::endl;
    ++a;
    std::cout << "State of a : " << a << std::endl;
    std::cout << "Post increment on a" << std::endl;
    a++;
    std::cout << "State of a : " << a << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "State of a : " << a << std::endl;
    std::cout << "Pre decrement on a" << std::endl;
    --a;
    std::cout << "State of a : " << a << std::endl;
    std::cout << "Post decrement on a" << std::endl;
    a--;
    std::cout << "State of a : " << a << std::endl;
    std::cout << "------------------------------------------" << std::endl;

    std::cout << "State of a : " << a << std::endl;
    std::cout << "State of b : " << b << std::endl;
    std::cout << "max(a, b) : " << Fixed::max( a, b ) << std::endl;
    std::cout << "min(a, b) : " << Fixed::min( a, b ) << std::endl;
    std::cout << "------------------------------------------" << std::endl;

	std::cout << std::boolalpha;
    std::cout << "State of b : " << b << std::endl;
    std::cout << "State of L : " << L << std::endl;
	std::cout << b << " >= " << L << ": " << (b >= L) << std::endl;
	std::cout << L << " >= " << L << ": " << (L >= L) << std::endl;
	std::cout << L << " >= " << b << ": " << (L >= b) << std::endl;
	std::cout << b << " > " << L << ": " << (b > L) << std::endl;
	std::cout << b << " < " << L << ": " << (b < L) << std::endl;
	std::cout << L << " < " << L << ": " << (L < L) << std::endl;
	std::cout << b << " <= " << L << ": " << (b <= L) << std::endl;
	std::cout << L << " <= " << L << ": " << (L <= L) << std::endl;
	std::cout << L << " <= " << b << ": " << (L <= b) << std::endl;
	std::cout << b << " == " << L << ": " << (b == L) << std::endl;
	std::cout << b << " == " << b << ": " << (b == b) << std::endl;
    std::cout << "------------------------------------------" << std::endl;

    std::cout << "State of b : " << b << std::endl;
	std::cout << "b + 10 = " << (b + 10) << std::endl;
	std::cout << "b / 2 = " << (b / 2) << std::endl;
	std::cout << "b * 2 = " << (b * 2) << std::endl;

	return (0);
}
