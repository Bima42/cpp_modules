#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main (void)
{
	srand (time(NULL));	

	Intern intern;
	Form *form;
	Bureaucrat edjie("Edjie", 5);

	std::cout << "🚧 ---------- TEST : Intern ---------- 🚧" << std::endl;
	form = intern.makeForm("PresidentialForm", "Yvan");
	std::cout << "### Sign Form ... ###" << std::endl;
	edjie.signForm(*form);
	std::cout << *form << std::endl;
	std::cout << "### Execute Form ... ###" << std::endl;
	edjie.executeForm(*form);

	delete form;

	edjie = Bureaucrat("Edjie", 50);

	std::cout << "🚧 ---------- TEST : Wrong Form Name ---------- 🚧" << std::endl;
	form = intern.makeForm("Presidential Request", "Yvan");
	std::cout << std::endl;

	std::cout << "🚧 ---------- TEST : Wrong Grade  ---------- 🚧" << std::endl;
	form = intern.makeForm("RobotomyForm", "Yvan");

	edjie.signForm(*form);
	std::cout << *form << std::endl;
	edjie.executeForm(*form);

	delete form;

	while(1) {}

	return 0;
}
