#ifndef INC_42CPP_MODULES_CAT_H
#define INC_42CPP_MODULES_CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	virtual ~Cat();
	Cat(const Cat &cat);
	Cat &operator=(const Cat &cat);
	virtual void makeSound(void) const;
};

#endif
