#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	iterator = 0;
}

void PhoneBook::add()
{
	if (contacts[iterator].fill(iterator + 1))
		iterator++;
	if (iterator == 8)
		iterator = 0;
}

void PhoneBook::search()
{
	int i = 0;
	std::string index_input;
	int index;

	for (int i = 0; contacts[i].index != 0 && i < 7; i++)
		contacts[i].print(false);
	std::cout << "Enter the index of the desired entry: ";
	std::getline(std::cin, index_input);
	try {
		index = std::stoi(index_input);
	}
	catch (...) {
		std::cout << "Index is invalid!" << std::endl;
		return;
	}
	if (index < 1 || index > 8)
	{
		std::cout << "Index is invalid!" << std::endl;
		return;
	}
	while (contacts[i].index != 0 || contacts[i].index != index)
	{
		if (contacts[i].index == 0)
			break;
		else if (contacts[i].index == index)
		{
			contacts[i].print(true);
			return;
		}
		i++;
	}
	std::cout << "Index not found!" << std::endl;
}
