#ifndef ITER_H
# define ITER_H

#include <iostream>
#include <string>

template< typename T >
void iter ( const T tab[], const int size, void (*f)(const T &x)) {
	if (size < 0) {
		std::cout << "Size can't be negative" << std::endl;
		return;
	}
	for (int i = 0; i < size; i++) {
		f(tab[i]);
	}
}	

template< typename T >
void display ( T const & i ) {
	std::cout << i << std::endl;
	return;
}

#endif
