#include "Harl.hpp"

int	main (int argc, char **argv)
{
	Harl harl;
	std::string level;

	// Ternaire : level = argc == 2 ? argv[1] : "";

	if (argc == 2)
	{
		level = argv[1];
		harl.complain(level);
	}
	else
		std::cout << "Error: Wrong arguments" << std::endl;
	return (0);
}
