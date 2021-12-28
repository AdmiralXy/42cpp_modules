#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	name = "<unnamed>";
	ClapTrap::name = name + "_clap_name";
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap constructor with string argument called" << std::endl;
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamond_trap) : ClapTrap(diamond_trap), ScavTrap(diamond_trap), FragTrap(diamond_trap)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamond_trap)
{
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	this->name = diamond_trap.name;
	this->hit_points = diamond_trap.hit_points;
	this->energy_points = diamond_trap.energy_points;
	this->attack_damage = diamond_trap.attack_damage;
	return *this;
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap - " << this->name << ". ClapTrap - " << ClapTrap::name << std::endl;
}
