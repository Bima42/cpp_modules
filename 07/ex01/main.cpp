#include "iter.hpp"

int main( void ) {
	int tab[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	iter(tab, 10, display);
	iter(tab, -2, display);
}
