#ifndef INC_42CPP_MODULES_DIAMONDTRAP_H
#define INC_42CPP_MODULES_DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &diamond_trap);
	DiamondTrap &operator=(const DiamondTrap &diamond_trap);
	void attack(std::string const &target);
	void whoAmI();
};

#endif
