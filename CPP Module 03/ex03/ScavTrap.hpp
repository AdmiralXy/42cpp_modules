#ifndef INC_42CPP_MODULES_SCAVTRAP_H
#define INC_42CPP_MODULES_SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap &scav_trap);
	ScavTrap &operator=(const ScavTrap &scav_trap);
	void guardGate();
	void attack(std::string const &target);
};

#endif
