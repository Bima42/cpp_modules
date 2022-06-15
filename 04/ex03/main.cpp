#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main() {
    IMateriaSource * src = new MateriaSource();

    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

	std::cout << "🚧 ==== TEST : Materia stock full ==== 🚧" << std::endl;
    AMateria * tmp = new Ice();
    src->learnMateria(tmp);
	std::cout << std::endl;

    delete tmp;

    ICharacter* me = new Character("a");
    ICharacter* bob = new Character("b");

	std::cout << "🚧 ==== TEST : Ice, Cure, Cure, Ice ==== 🚧" << std::endl;

    AMateria* cure = src->createMateria("cure");

    me->equip(src->createMateria("ice"));
    me->equip(cure);
    me->equip(src->createMateria("cure"));
    me->equip(src->createMateria("ice"));

    tmp = src->createMateria("cure");

    me->equip(tmp);
    me->unequip(1);
    me->equip(tmp);

    delete cure;

	std::cout << "# Wrong Index : ";
    me->use(4, *bob);

    me->use(3, *bob);
    me->use(2, *bob);
    me->use(1, *bob);
    me->use(0, *bob);

	std::cout << "# Wrong Index : ";
    me->use(-1, *bob);
	std::cout << std::endl;

	delete tmp;

	std::cout << "🚧 ==== TEST : Index 1 = Cure -> Ice ==== 🚧" << std::endl;
    tmp = src->createMateria("ice");

    me->unequip(1);
    me->equip(tmp);

	std::cout << "# Index 1 : ";
    me->use(1, *bob);

    delete me;
    delete bob;
    delete src;

	return (0);
}
