#include "ShrubberyCreationForm.hpp"

int main (void)
{
	try
	{
		Bureaucrat	edjie("Edjie", 60);
		Shrubbery test("chevre");

		edjie.signForm(test);
		edjie.executeForm(test);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
