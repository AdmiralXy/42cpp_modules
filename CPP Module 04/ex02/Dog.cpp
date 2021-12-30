#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor" << std::endl;
	Animal::type = "Dog";
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	delete brain;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
	std::cout << "Dog copy constructor" << std::endl;
	brain = new Brain();
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Dog assignation operator" << std::endl;
	this->type = dog.type;
	*(this->brain) = *(dog.brain);
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Doggy says woof-woof" << std::endl;
}
