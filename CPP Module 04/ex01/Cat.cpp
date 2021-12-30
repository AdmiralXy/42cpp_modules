#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor" << std::endl;
	Animal::type = "Cat";
	brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	delete brain;
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
	std::cout << "Cat copy constructor" << std::endl;
	brain = new Brain();
	*this = cat;
}

Cat &Cat::operator=(const Cat &cat)
{
	std::cout << "Cat assignation operator" << std::endl;
	this->type = cat.type;
	*(this->brain) = *(cat.brain);
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Kitty says meow-meow" << std::endl;
}
