#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &amateria)
{
	*this = amateria;
}

AMateria::~AMateria()
{

}

AMateria &AMateria::operator=(const AMateria &amateria)
{
	this->type = amateria.type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* AMateria useless use to " << target.getName() << " *" << std::endl;
}
