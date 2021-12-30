#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	// Will throw an error
	//Animal a;

	// Work fine
	const Animal* i = new Cat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	delete i;
}
