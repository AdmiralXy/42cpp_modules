#include "Karen.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "usage: ./karenFilter [level]" << std::endl;
		return (1);
	}
	Karen A;

	A.complain(std::string(argv[1]));
}
