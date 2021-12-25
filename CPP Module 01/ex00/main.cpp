#include "Zombie.hpp"

int	main(void)
{
	Zombie *artem = newZombie("Artem");
	artem->announce();
	randomChump("Oleg");
	randomChump("Nikolay");

	delete artem;
	return (0);
}
