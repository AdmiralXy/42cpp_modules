#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor" << std::endl;
	type = "<undefined>";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal default constructor" << std::endl;
	this->type = type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrong_animal)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	*this = wrong_animal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrong_animal)
{
	std::cout << "WrongAnimal assignation operator" << std::endl;
	this->type = wrong_animal.type;
	return *this;
}

std::string WrongAnimal::getType(void) const
{
	return type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "The sounds of " << type << " come from the forest.." << std::endl;
}
