#include "Base.hpp"

int main ( void ) {
	Base *ptr;

	srand (time(NULL));
	ptr = generate();
	identify(ptr);
	identify(*ptr);
	std::cout << std::endl;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	std::cout << std::endl;

	ptr = generate();
	identify(ptr);
	identify(*ptr);

	return (0);
}
