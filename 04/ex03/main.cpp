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

    AMateria * tmp = new Ice();
    src->learnMateria(tmp);

    delete tmp;

    ICharacter* me = new Character("a");
    ICharacter* bob = new Character("b");

    me->equip(src->createMateria("ice"));

    AMateria* cure = src->createMateria("cure");

    me->equip(cure);
    me->equip(src->createMateria("cure"));
    me->equip(src->createMateria("ice"));

    tmp = src->createMateria("cure");

    me->equip(tmp);
    me->unequip(1);
    me->equip(tmp);

    delete cure;

    me->use(4, *bob);
    me->use(3, *bob);
    me->use(2, *bob);
    me->use(1, *bob);
    me->use(0, *bob);
    me->use(-1, *bob);

    * dynamic_cast<Character *>(bob) = * dynamic_cast<Character *>(me);

    me->use(2, *bob);

    delete me;
    delete bob;
    delete src;

	return (0);
}
