#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base ( void ) {}

Base *generate ( void ) {
	switch (rand() % 3) {
		case 0: {
			A *a = new A();
			std::cout << "🚧 ---- Creating Base A ---- 🚧" << std::endl;
			return (a);
		}
		case 1: {
			B *b = new B();
			std::cout << "🚧 ---- Creating Base B ---- 🚧"  << std::endl;
			return (b);
		}
		case 2: {
			C *c = new C();
			std::cout << "🚧 ---- Creating Base C ---- 🚧" << std::endl;
			return (c);
		}
		default: {
			std::cout << "Nothing created. Null returned" << std::endl;
			return (nullptr);
		}
	}
}

/* We saw in intra videos (42 intra) classes on casting
** that this syntax : dynamic_cast<>() == NULL is
** available when we use pointer of class
*/

void identify ( Base *p ) {
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "Pointer type is A !" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "Pointer type is B !" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "Pointer type is C !" << std::endl;
	else
		std::cout << "Object passed is not a subclass of Base !" << std::endl;
}

/* With a reference, we have to use Exception
** which is try and catch block
*/

void identify ( Base &p ) {
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "Reference type is A !" << std::endl;
		return ;
	}
	catch (std::bad_cast) {
		std::cout << "Type is not A ... Trying B" << std::endl;
	}

	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "Reference type is B !" << std::endl;
		return ;
	}
	catch (std::bad_cast) {
		std::cout << "Type is not B ... Trying C" << std::endl;
	}

	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "Reference type is C !" << std::endl;
		return ;
	}
	catch (std::bad_cast) {
		std::cout << "Type is not C. Object passed is not a sublass of Base !" << std::endl;
	}
}
