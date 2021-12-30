#ifndef INC_42CPP_MODULES_BRAIN_H
#define INC_42CPP_MODULES_BRAIN_H

#include <iostream>
#include <string>

class Brain
{
protected:
	std::string ideas[100];
public:
	Brain();
	~Brain();
	Brain(const Brain &brain);
	Brain &operator=(const Brain &brain);
};

#endif
