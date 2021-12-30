#ifndef INC_42CPP_MODULES_DOG_H
#define INC_42CPP_MODULES_DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog &dog);
	Dog &operator=(const Dog &dog);
	virtual void makeSound(void) const;
};

#endif
