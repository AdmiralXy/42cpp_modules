#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	{
		std::cout << "-------FragTrap:----------" << std::endl;
		FragTrap A("Oleg");
		FragTrap B("EvilArthas");

		B.attack("Oleg");
		A.takeDamage(30);
		B.highFivesGuys();
	}
	{
		std::cout << "-------ScavTrap:----------" << std::endl;
		ScavTrap A("Oleg");
		ScavTrap B("EvilArthas");

		B.attack("Oleg");
		A.takeDamage(20);
		B.guardGate();
	}
	{
		std::cout << "-------ClapTrap:----------" << std::endl;
		ClapTrap A;
		ClapTrap B("EvilArthas");

		A.attack("EvilArthas");
		B.takeDamage(0);
		B.beRepaired(0);
	}
}
