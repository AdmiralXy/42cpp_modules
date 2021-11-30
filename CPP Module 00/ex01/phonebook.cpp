#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook phone_book;
	bool is_exit = false;
	std::string command;

	while (!is_exit)
	{
		std::cout << "phonebook $> ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phone_book.add();
		else if (command == "SEARCH")
			phone_book.search();
		else if (command == "EXIT")
		{
			std::cout << "Goodbye!" << std::endl;
			is_exit = true;
		}
		else
			std::cout << "Error: undefined operation, input is discarded." << std::endl;
	}
}
