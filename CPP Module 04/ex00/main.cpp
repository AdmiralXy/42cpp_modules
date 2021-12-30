#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
		std::cout << "--------------- Test ---------------" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	{
		std::cout << "------------ Wrong test ------------" << std::endl;
		const WrongAnimal* i = new WrongCat();
		const WrongCat* i_normally = new WrongCat();
		i->makeSound();
		i_normally->makeSound();
		delete i;
		delete i_normally;
	}
}
