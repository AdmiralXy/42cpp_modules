#ifndef INC_42CPP_MODULES_AMATERIA_H
#define INC_42CPP_MODULES_AMATERIA_H

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string type;
private:
	AMateria();
public:
	AMateria(std::string const &type);
	AMateria(const AMateria &amateria);
	virtual ~AMateria();
	AMateria &operator=(const AMateria &amateria);
	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
