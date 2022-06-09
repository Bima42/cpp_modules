#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main (void)
{
	srand (time(NULL));	

	try
	{
		Intern intern;
		Form *form;
		Bureaucrat edjie("Edjie", 5);

		std::cout << "🚧 ---------- TEST : Intern ---------- 🚧" << std::endl;
		form = intern.makeForm("PresidentialForm", "Yvan");
		std::cout << "### Sign Form ... ###" << std::endl;
		edjie.signForm(*form);
		std::cout << "### Execute Form ... ###" << std::endl;
		edjie.executeForm(*form);
		std::cout << "SUCCESS : ✅" << std::endl << std::endl;

		delete form;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "FAILURE : ❌" << std::endl << std::endl;
	}

	try
	{
		Intern intern;
		Form *form;
		Bureaucrat edjie("Edjie", 50);

		std::cout << "🚧 ---------- TEST : Wrong Form Name ---------- 🚧" << std::endl;
		form = intern.makeForm("Presidential Request", "Yvan");
		std::cout << std::endl;

		std::cout << "🚧 ---------- TEST : Wrong Grade  ---------- 🚧" << std::endl;
		form = intern.makeForm("RobotomyForm", "Yvan");

		edjie.signForm(*form);
		edjie.executeForm(*form);
		std::cout << "SUCCESS : ✅" << std::endl << std::endl;

		delete form;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "FAILURE : ❌" << std::endl << std::endl;
	}

	return 0;
}
