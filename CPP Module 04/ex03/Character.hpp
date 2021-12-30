#ifndef INC_42CPP_MODULES_CHARACTER_H
#define INC_42CPP_MODULES_CHARACTER_H

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	int size;
	AMateria *inventory[4];
public:
	Character();
	Character(std::string name);
	Character(const Character &character);
	virtual ~Character();
	Character &operator=(const Character &character);
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif
