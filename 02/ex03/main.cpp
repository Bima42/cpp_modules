#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const p);

int main( void ) 
{
	const Point a(10.0, 0.0);
	const Point b(0.0, 0.0);
	const Point c(0.0, 10.0);
	const Point p(4.0, 4.0); // Must be true

	std::string ret = bsp(a, b, c, p) ? "inside" : "outside";

	std::cout << "The point is " << ret << std::endl;
}
