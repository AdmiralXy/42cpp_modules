#include "FragTrap.hpp"

int	main(void)
{
	FragTrap A("Oleg");
	FragTrap B("EvilArthas");

	B.attack("Oleg");
	A.takeDamage(20);
	B.highFivesGuys();
}
