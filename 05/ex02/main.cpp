#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void)
{
	try
	{
		Bureaucrat	edjie("Edjie", 1);
		Shrubbery test("chevre");
		Robotomy cul("robot");
		Presidential mamelle("macron");

		edjie.signForm(test);
		edjie.executeForm(test);
		edjie.signForm(cul);
		edjie.executeForm(cul);
		edjie.signForm(mamelle);
		edjie.executeForm(mamelle);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
