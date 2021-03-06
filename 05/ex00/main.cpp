#include "Bureaucrat.hpp"

int main (void)
{
	Bureaucrat employee("Yvan", 3);

	std::cout << "🚧 ---------- TEST : Yvan, Grade 3 ---------- 🚧" << std::endl;
	std::cout << employee;
	std::cout << "### Upgrading employee ... ###" << std::endl;
	employee.upGrade();
	std::cout << std::endl;
	std::cout << "New Grade : " << employee.getGrade() << std::endl;
	std::cout << employee;
	std::cout << std::endl;

	std::cout << "🚧 ------------ TEST : Error ------------ 🚧" << std::endl;

	Bureaucrat edjie("Edjie", 0);
	std::cout << edjie << std::endl;

	edjie = Bureaucrat("Yvan", 1000);
	std::cout << edjie << std::endl;

	edjie = Bureaucrat("Duboulow", 1);
	std::cout << edjie;
	std::cout << "### Upgrading employee ... ###" << std::endl;
	edjie.upGrade();
	std::cout << edjie;
}
