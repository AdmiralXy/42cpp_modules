#ifndef INC_42CPP_MODULES_CAT_H
#define INC_42CPP_MODULES_CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	virtual ~Cat();
	Cat(const Cat &cat);
	Cat &operator=(const Cat &cat);
	virtual void makeSound(void) const;
};

#endif
