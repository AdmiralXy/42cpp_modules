#include "Span.hpp"
#include <cstdlib>

int	main(void)
{
	{
		std::cout << "Subject tests: " << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "Tests: " << std::endl;
		int N = 1000000;
		std::vector<int> v(N);
		srand(time(0));
		std::generate(v.begin(), v.end(), std::rand);

		Span sp(N);
		sp.fill(v.begin(), v.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
}
