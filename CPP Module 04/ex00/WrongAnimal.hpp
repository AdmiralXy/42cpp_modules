#ifndef INC_42CPP_MODULES_WRONGANIMAL_H
#define INC_42CPP_MODULES_WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal &wrong_animal);
	WrongAnimal &operator=(const WrongAnimal &wrong_animal);
	std::string getType(void) const;
	void makeSound(void) const;
};

#endif
