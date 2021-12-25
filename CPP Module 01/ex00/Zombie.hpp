#ifndef INC_42CPP_MODULES_ZOMBIE_H
#define INC_42CPP_MODULES_ZOMBIE_H

#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
