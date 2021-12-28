#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	name = "<unnamed>";
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap constructor with string argument called" << std::endl;
	this->name = name;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag_trap) : ClapTrap(frag_trap)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &frag_trap)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->name = frag_trap.name;
	this->hit_points = frag_trap.hit_points;
	this->energy_points = frag_trap.energy_points;
	this->attack_damage = frag_trap.attack_damage;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " send a request give him high five!" << std::endl;
}

void FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << name << " attack " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}
