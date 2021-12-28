#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap A("Oleg");
	ScavTrap B("EvilArthas");

	B.attack("Oleg");
	A.takeDamage(20);
	B.guardGate();
}
