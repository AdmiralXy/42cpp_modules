#ifndef INC_42CPP_MODULES_HUMANB_H
#define INC_42CPP_MODULES_HUMANB_H

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *weapon;
	std::string name;
public:
	HumanB(std::string name);
	~HumanB();
	void attack();
	const Weapon *getWeapon();
	void setWeapon(Weapon &weapon);
};

#endif
