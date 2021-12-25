#ifndef INC_42CPP_MODULES_WEAPON_H
#define INC_42CPP_MODULES_WEAPON_H

#include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon(std::string type);
	~Weapon();
	const std::string &getType();
	void setType(std::string type);
};

#endif
