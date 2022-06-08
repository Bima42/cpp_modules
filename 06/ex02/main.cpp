#include "Base.hpp"

int main ( void ) {
	Base *ptr;

	srand (time(NULL));
	ptr = generate();
	identify(ptr);
	identify(*ptr);

	ptr = generate();
	identify(ptr);
	identify(*ptr);

	ptr = generate();
	identify(ptr);
	identify(*ptr);

	return (0);
}
