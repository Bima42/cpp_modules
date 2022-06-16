#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void)
{
	Bureaucrat	edjie("Edjie", 1);
	Shrubbery test("chevre");

	srand (time(NULL));
	std::cout << "🚧 ---------- TEST : Shrubbery ---------- 🚧" << std::endl;
	edjie.signForm(test);
	edjie.executeForm(test);
	std::cout << test.getTree() << std::endl;

	edjie = Bureaucrat("Edjie", 1);
	Robotomy Yvan("Yvan");

	std::cout << std::endl << "🚧 ---------- TEST : Robotomy ---------- 🚧" << std::endl;
	edjie.signForm(Yvan);
	edjie.executeForm(Yvan);
	
	edjie = Bureaucrat("Edjie", 1);
	Presidential presid("Macron");

	std::cout << std::endl << "🚧 ---------- TEST : Presidential ---------- 🚧" << std::endl;
	edjie.signForm(presid);
	edjie.executeForm(presid);

	edjie = Bureaucrat("Edjie", 20);

	std::cout << std::endl << "🚧 ---------- TEST : Presidential ---------- 🚧" << std::endl;
	edjie.signForm(presid);
	edjie.executeForm(presid);

	return 0;
}
