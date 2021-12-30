#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor" << std::endl;
	Animal::type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Dog assignation operator" << std::endl;
	this->type = dog.type;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Doggy says woof-woof" << std::endl;
}
