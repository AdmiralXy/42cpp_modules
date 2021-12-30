#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor" << std::endl;
	type = "<undefined>";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal default constructor" << std::endl;
	this->type = type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal)
{
	std::cout << "Animal assignation operator" << std::endl;
	this->type = animal.type;
	return *this;
}

std::string Animal::getType(void) const
{
	return type;
}
