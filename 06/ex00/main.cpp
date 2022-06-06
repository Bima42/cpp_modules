#include "Convert.hpp"

int main (int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Error: One argument required." << std::endl;
		return (1);
	}

	Convert		convert;

	convert.execution(convert, argv[1]);
	
	return (0);
}
