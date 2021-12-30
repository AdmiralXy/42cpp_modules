#ifndef INC_42CPP_MODULES_WRONGCAT_H
#define INC_42CPP_MODULES_WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	virtual ~WrongCat();
	WrongCat(const WrongCat &wrong_cat);
	WrongCat &operator=(const WrongCat &wrong_cat);
	void makeSound(void) const;
};

#endif
