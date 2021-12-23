#include "Contact.hpp"

Contact::Contact()
{
	index = 0;
}

int Contact::fill(int index)
{
	int total_length = 0;

	std::string info[5];
	std::cout << "First name: ";
	std::getline(std::cin, info[0]);
	std::cout << "Last name: ";
	std::getline(std::cin, info[1]);
	std::cout << "Nickname: ";
	std::getline(std::cin, info[2]);
	std::cout << "Phone number: ";
	std::getline(std::cin, info[3]);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, info[4]);

	for (int i = 0; i < 5; i++)
		total_length += info[i].length();

	if (total_length == 0)
	{
		std::cout << "Empty contact not added!" << std::endl;
		return (0);
	}
	else
	{
		this->index = index;
		for (int i = 0; i < 5; i++)
			information[i] = info[i];
		std::cout << "Contact successfully added!" << std::endl;
	}
	return (1);
}

void Contact::print(bool isFull)
{
	if (!isFull)
	{
		std::cout << "|" << std::setw(10) << index;
		for (int i = 0; i < 3; i++)
		{
			std::cout << "|";
			if (this->information[i].length() > 10)
				std::cout << this->information[i].substr(0, 9) << ".";
			else
				std::cout << std::setw(10) << information[i];
		}
		std::cout << "|" << std::endl;
	}
	else
	{
		std::cout << "Firstname: " << this->information[0] << std::endl;
		std::cout << "Lastname: " << this->information[1] << std::endl;
		std::cout << "Nickname: " << this->information[2] << std::endl;
		std::cout << "Phone number: " << this->information[3] << std::endl;
		std::cout << "Darkest secret: " << this->information[4] << std::endl;
	}
}
