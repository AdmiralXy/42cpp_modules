#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	size = 0;
	for (int i = 0; i < 4; i++)
		matters[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materia_source)
{
	size = 0;
	for (int i = 0; i < 4; i++)
		matters[i] = NULL;
	*this = materia_source;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (matters[i])
			delete matters[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materia_source)
{
	for (int i = 0; i < 4; i++)
	{
		if (matters[i])
			delete matters[i];
		matters[i] = materia_source.matters[i]->clone();
		if (matters[i])
			size++;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (size < 4)
		this->matters[size++] = m;
	else
		std::cout << "Not enough space to store " << m->getType() << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (matters[i] != NULL && matters[i]->getType() == type)
			return (this->matters[i]->clone());
	return NULL;
}
