#include <iostream>
#include <list>
#include <algorithm>
#include "easyfind.hpp"

int	main(void)
{
	std::list<int> v(5);
	std::list<int>::iterator it;
	for (unsigned int i = 0; i < 5; i++)
		v.push_front((int)i);
	try
	{
		it = easyfind<std::list<int> >(v, 6);
		(void)it;
		std::cout << "Found!" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found!" << std::endl;
	}
}
