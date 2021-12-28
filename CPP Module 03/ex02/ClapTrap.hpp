#ifndef INC_42CPP_MODULES_CLAPTRAP_H
#define INC_42CPP_MODULES_CLAPTRAP_H

#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	int hit_points, energy_points, attack_damage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &clap_trap);
	ClapTrap &operator=(const ClapTrap &clap_trap);
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
