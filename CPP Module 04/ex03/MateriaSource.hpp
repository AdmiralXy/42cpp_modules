#ifndef INC_42CPP_MODULES_MATERIASOURCE_H
#define INC_42CPP_MODULES_MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	int size;
	AMateria *matters[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &materia_source);
	virtual ~MateriaSource();
	MateriaSource &operator=(const MateriaSource &materia_source);
	virtual void learnMateria(AMateria *m);
	virtual AMateria* createMateria(std::string const &type);
};

#endif
