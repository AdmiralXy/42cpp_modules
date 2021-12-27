#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	name = "<unnamed>";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor with string argument called" << std::endl;
	this->name = name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap_trap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = clap_trap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap_trap)
{
	std::cout << "Assignation operator called" << std::endl;
	this->name = clap_trap.name;
	this->hit_points = clap_trap.hit_points;
	this->energy_points = clap_trap.energy_points;
	this->attack_damage = clap_trap.attack_damage;
	return *this;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << name << " attack " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
	hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " was repaired by " << amount << " hit points!" << std::endl;
	hit_points += amount;
}
