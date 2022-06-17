#include "Span.hpp"

int main ( void )
{
	Span sp = Span(6);
	
	std::cout << "🚧 ==== TEST : SPAN Creation ==== 🚧" << std::endl;

	sp.addNumber(43);
	sp.addNumber(5);
	sp.addNumber(4);
	sp.addNumber(194);
	sp.addNumber(7654);
	sp.addNumber(-32);

	std::cout << "🚧 ==== SPAN Created ==== 🚧" << std::endl;

	std::cout << "⚠️  Trying to add too much datas ⚠️ " << std::endl;
	sp.addNumber(89);

	std::cout << std::endl;
	std::cout << "🚧 ==== PRINT SPAN ==== 🚧" << std::endl;
	sp.show();		

	std::cout << std::endl;
	std::cout << "🚧 ==== TEST : Span Functions ==== 🚧" << std::endl;
	std::cout << "Longest span = " << sp.longestSpan() << std::endl;
	std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << "🚧 ==== TEST : Insert Function ==== 🚧" << std::endl;
	std::cout << "### Adding 2 integers at the beggining ###" << std::endl; 

	std::vector<int>::iterator start = sp.begin();
	sp.insert(start, 2, 10);
	sp.show();		
	std::cout << std::endl;

	std::cout << "⚠️  Trying to add 2 integers at the end ⚠️" << std::endl; 
	std::vector<int>::iterator end = sp.end() - 1;
	sp.insert(end, 2, 25);

	std::cout << std::endl;

	std::cout << "⚠️  Trying to add datas out of range ⚠️" << std::endl; 
	std::vector<int>::iterator test = sp.begin() - 2;
	sp.insert(test, 2, 25);

	std::cout << std::endl;

	Span span = Span(12000);

	std::cout << "🚧 ==== TEST : SPAN 12000 numbers ==== 🚧" << std::endl;
	std::vector<int>::iterator test2 = span.begin();
	span.insert(test2, 2000, 50);
	test2 = span.begin() + 2000;
	span.insert(test2, 2000, 80);
	test2 = span.begin() + 4000;
	span.insert(test2, 2000, -50);
	test2 = span.begin() + 6000;
	span.insert(test2, 2000, 15);
	test2 = span.begin() + 8000;
	span.insert(test2, 2000, 896);
	test2 = span.begin() + 10000;
	span.insert(test2, 2000, 1);
	std::cout << "Longest span = " << span.longestSpan() << std::endl;
	std::cout << "Shortest span = " << span.shortestSpan() << std::endl;

	return 0;
}
