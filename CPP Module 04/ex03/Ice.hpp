#ifndef INC_42CPP_MODULES_ICE_H
#define INC_42CPP_MODULES_ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &ice);
	~Ice();
	Ice &operator=(const Ice &ice);
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif
