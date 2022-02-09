#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		AMateria* ice = src->createMateria("ice");
		AMateria* cure = src->createMateria("cure");

		ICharacter* oleg = new Character("oleg");
		ICharacter* anton = new Character("anton");
		oleg->equip(ice);
		anton->equip(cure);
		oleg->use(0, *anton);
		anton->use(0, *oleg);
		anton->unequip(0);
		delete cure;
		anton->use(0, *oleg);
		delete oleg;
		delete anton;
		delete src;
	}
	return 0;
}
