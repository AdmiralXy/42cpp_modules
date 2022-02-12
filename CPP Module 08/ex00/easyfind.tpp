#include "easyfind.hpp"

template<typename T>
typename T::iterator easyfind(T &container, int element)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), element);
	if (it == container.end())
		throw std::exception();
	return it;
}