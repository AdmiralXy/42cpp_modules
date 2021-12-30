#include "Character.hpp"

Character::Character()
{
	size = 0;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	this->name = "<unnamed>";
}

Character::Character(std::string name)
{
	size = 0;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	this->name = name;
}

Character::Character(const Character &character)
{
	size = 0;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	*this = character;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (inventory[i])
			delete inventory[i];
}

Character &Character::operator=(const Character &character)
{
	std::cout << "Vizov?" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
		inventory[i] = character.inventory[i];
		if (inventory[i])
			size++;
	}
	name = character.name;
	return *this;
}

std::string const &Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	if (size < 4)
		this->inventory[size++] = m;
	else
		std::cout << "Not enough space to store " << m->getType() << std::endl;
}

void Character::unequip(int idx)
{
	int i;

	i = idx;
	while (i < 4 && this->inventory[i])
	{
		this->inventory[i - 1] = this->inventory[i];
		i++;
	}
	this->inventory[i] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > -1 && idx < 5 && inventory[idx])
		inventory[idx]->use(target);
}
