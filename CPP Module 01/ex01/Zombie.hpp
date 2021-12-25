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
	void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
