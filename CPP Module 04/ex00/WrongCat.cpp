#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor" << std::endl;
	WrongAnimal::type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrong_cat) : WrongAnimal(wrong_cat)
{
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = wrong_cat;
}

WrongCat &WrongCat::operator=(const WrongCat &wrong_cat)
{
	std::cout << "WrongCat assignation operator" << std::endl;
	this->type = wrong_cat.type;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Wrong Kitty says meow-meow" << std::endl;
}
