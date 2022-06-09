#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const p);

int main( void ) 
{
	const Point a(10.0, 0.0);
	const Point b(0.0, 0.0);
	const Point c(0.0, 10.0);
	const Point p(4.0, 4.0); // Must be true
	const Point q(12.0, 4.0); // Must be true

	std::string ret = bsp(a, b, c, p) ? "inside" : "outside";

	std::cout << "🚧 =========== TEST : Triangle ABC ============= 🚧" << std::endl;
	std::cout << "A: " << a << std::endl 
				<< "B: " << b << std::endl 
				<< "C: " << c << std::endl;
	std::cout << std::endl;

	std::cout << "🚧 =========== POINT : p ============= 🚧" << std::endl;
	std::cout << "Datas p : " << p << std::endl;
	std::cout << "The point is " << ret << ((ret == "inside") ? " ✅" : " ❌");
	std::cout << std::endl;
	std::cout << std::endl;

	ret = bsp(a, b, c, q) ? "inside" : "outside";
	std::cout << "🚧 =========== POINT : q ============= 🚧" << std::endl;
	std::cout << "Datas q : " << q << std::endl;
	std::cout << "The point is " << ret << ((ret == "inside") ? " ✅" : " ❌");
	std::cout << std::endl;
}
