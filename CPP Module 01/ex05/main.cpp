#include "Karen.hpp"

int	main(void)
{
	Karen A, B;

	A.complain(std::string("INFO"));
	A.complain(std::string("DEBUG"));
	B.complain(std::string("WARNING"));
}
