#ifndef INC_42CPP_MODULES_IMATERIASOURCE_H
#define INC_42CPP_MODULES_IMATERIASOURCE_H

#include "AMateria.hpp"

class AMateria;

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
