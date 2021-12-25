#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "String address: " << &string << std::endl;
	std::cout << "String address by pointer: " << stringPTR << std::endl;
	std::cout << "String address by reference: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "String value by pointer: " << *stringPTR << std::endl;
	std::cout << "String value by reference: " << stringREF << std::endl;

	return (0);
}
