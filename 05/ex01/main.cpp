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
	std::cout << "### ReSign form ... ###" << std::endl << std::endl;
	edjie.signForm(form);

	std::cout << std::endl;
	std::cout << "🚧 ----------------- ERRORS ----------------- 🚧" << std::endl;

	edjie = Bureaucrat("Edjie", 5);
	form = Form("Formulaire", 0, 0);
	std::cout << edjie << std::endl;

	std::cout << "--------------------------------------" << std::endl;

	edjie = Bureaucrat("Edjie", 5);
	form = Form("Formulaire", 1000, 5);
	std::cout << edjie << std::endl;

	std::cout << "--------------------------------------" << std::endl;

	edjie = Bureaucrat("Edjie", 8);
	Form form2("Formulaire", 10, 5);
	std::cout << form2 << std::endl;
	form2.beSigned(edjie);
	std::cout << "### Sign form ... ###" << std::endl << std::endl;
	std::cout << form2 << std::endl;
	std::cout << "### ReSign form ... ###" << std::endl << std::endl;
	form2.beSigned(edjie);
	std::cout << form2 << std::endl;

	std::cout << "--------------------------------------" << std::endl;

	edjie = Bureaucrat("Edjie", 60);
	Form form3("Formulaire", 50, 5);
	edjie.signForm(form3);

	return 0;
}
