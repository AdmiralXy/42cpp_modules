#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	{
		std::cout << "-------DiamondTrap:----------" << std::endl;
		DiamondTrap A("Oleg");
		A.attack("Andrey");
		A.whoAmI();
		A.highFivesGuys();
		A.guardGate();
	}
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
