#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main (void)
{
	try
	{
		Intern intern;
		Form *form;
		Bureaucrat edjie("Edjie", 5);

		form = intern.makeForm("PresidentialForm", "Yvan");
		edjie.signForm(*form);
		edjie.executeForm(*form);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Intern intern;
		Form *form;
		Bureaucrat edjie("Edjie", 50);

		form = intern.makeForm("Presidential Request", "Yvan");
		form = intern.makeForm("RobotomyForm", "Yvan");

		edjie.signForm(*form);
		edjie.executeForm(*form);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
