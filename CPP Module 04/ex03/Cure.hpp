#ifndef INC_42CPP_MODULES_CURE_H
#define INC_42CPP_MODULES_CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &cure);
	~Cure();
	Cure &operator=(const Cure &cure);
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif
