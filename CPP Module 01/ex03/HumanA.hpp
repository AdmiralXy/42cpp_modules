#ifndef INC_42CPP_MODULES_HUMANA_H
#define INC_42CPP_MODULES_HUMANA_H

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon &weapon;
	std::string name;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack();
};

#endif
