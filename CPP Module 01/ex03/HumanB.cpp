#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->weapon = 0;
	this->name = name;
}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with his " << weapon->getType() << std::endl;
	else
		std::cout << name << " currently disarmed!" << std::endl;
}

const Weapon *HumanB::getWeapon()
{
	return weapon;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
