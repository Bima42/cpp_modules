#include "Bureaucrat.hpp"

int main (void)
{
	Bureaucrat edjie("Edjie", 8);
	Form form("Formulaire", 10, 15);

	std::cout << "🚧 ---------- TEST Form : Sign=10, Exec=15 ---------- 🚧" << std::endl;
	std::cout << edjie;
	std::cout << form;
	std::cout << "isSigned = " << form.isSigned() << std::endl;
	std::cout << "### Sign form ... ###" << std::endl;
	form.beSigned(edjie);
	std::cout << "isSigned = " << form.isSigned() << std::endl;
	edjie.signForm(form);

	std::cout << std::endl;
	std::cout << "🚧 ----------------- ERRORS ----------------- 🚧" << std::endl;

	try
	{
		Bureaucrat 	edjie("Edjie", 5);
		Form		form("Formulaire", 0, 0);
		std::cout << edjie << std::endl;
		std::cout << form << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;

	try
	{
		Bureaucrat	edjie("Edjie", 5);
		Form		form("Formulaire", 1000, 5);
		std::cout << edjie << std::endl;
		std::cout << form << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;

	try
	{
		Bureaucrat edjie("Edjie", 8);
		Form		form("Formulaire", 10, 5);
		std::cout << form << std::endl;
		form.beSigned(edjie);
		std::cout << "### Sign form ... ###" << std::endl << std::endl;
		std::cout << form << std::endl;
		std::cout << "### ReSign form ... ###" << std::endl << std::endl;
		form.beSigned(edjie);
		std::cout << form;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;

	try
	{
		Bureaucrat	edjie("Edjie", 60);
		Form		form("Formulaire", 50, 5);
		edjie.signForm(form);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
