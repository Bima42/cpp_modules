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

	try {
		std::cout << "⚠️  Trying to add too much datas ⚠️ " << std::endl;
		sp.addNumber(89);
		std::cout << "Adding too much datas : SUCCESS ✅" << std::endl;
	}
	catch (std::invalid_argument & ex) {
		std::cerr << ex.what() << std::endl << "Adding too much datas : FAILURE ❌" << std::endl;
	}

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

	try {
		std::cout << "⚠️  Trying to add 2 integers at the end ⚠️" << std::endl; 
		std::vector<int>::iterator end = sp.end() - 1;
		sp.insert(end, 2, 25);
	}
	catch (std::out_of_range &ex) {
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		std::cout << "⚠️  Trying to add datas out of range ⚠️" << std::endl; 
		std::vector<int>::iterator test = sp.begin() - 2;
		sp.insert(test, 2, 25);
	}
	catch (std::out_of_range &ex) {
		std::cout << ex.what() << std::endl;
	}

	return 0;
}
