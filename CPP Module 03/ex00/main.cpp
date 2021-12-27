#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap A;
	ClapTrap B("EvilArthas");

	A.attack("EvilArthas");
	B.takeDamage(0);
	B.beRepaired(0);
}
