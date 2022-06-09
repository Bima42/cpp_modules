#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void)
{
	srand (time(NULL));
	try
	{
		Bureaucrat	edjie("Edjie", 1);
		Shrubbery test("chevre");

		std::cout << "🚧 ---------- TEST : Shrubbery ---------- 🚧" << std::endl;
		edjie.signForm(test);
		edjie.executeForm(test);
		std::cout << test.getTree() << std::endl;
		std::cout << "SUCCESS : ✅" << std::endl << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "FAILURE : ❌" << std::endl << std::endl;
	}

	try
	{
		Bureaucrat	edjie("Edjie", 1);
		Robotomy Yvan("Yvan");

		std::cout << "🚧 ---------- TEST : Robotomy ---------- 🚧" << std::endl;
		edjie.signForm(Yvan);
		edjie.executeForm(Yvan);
		std::cout << "SUCCESS : ✅" << std::endl << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "FAILURE : ❌" << std::endl << std::endl;
	}

	try
	{
		Bureaucrat	edjie("Edjie", 1);
		Presidential presid("Macron");

		std::cout << "🚧 ---------- TEST : Presidential ---------- 🚧" << std::endl;
		edjie.signForm(presid);
		edjie.executeForm(presid);
		std::cout << "SUCCESS : ✅" << std::endl << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "FAILURE : ❌" << std::endl << std::endl;
	}

	try
	{
		Bureaucrat	edjie("Edjie", 20);
		Presidential presid("Macron");

		std::cout << "🚧 ---------- TEST : Presidential ---------- 🚧" << std::endl;
		edjie.signForm(presid);
		edjie.executeForm(presid);
		std::cout << "SUCCESS : ✅" << std::endl << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "FAILURE : ❌" << std::endl << std::endl;
	}

	return 0;
}
