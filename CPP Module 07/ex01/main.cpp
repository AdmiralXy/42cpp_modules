#include <iostream>
#include "iter.hpp"
#include <cstdlib>

class Awesome
{
public:
	Awesome(void) : _n(42) { return; }
	int get(void)const { return this->_n; }
private:
	int _n;
};

std::ostream &operator<<(std::ostream &o, Awesome const &rhs) { o << rhs.get(); return o; }

template <typename T>
void print(T &elem)
{
	std::cout << elem << " ";
}

template <typename T>
void multiply(T &elem)
{
	elem *= 2;
}

template <typename T>
void toUppercase(T &elem)
{
	if (elem >= 'a' && elem <= 'z')
		elem += 10;
}

int	main(void)
{
	{
		srand((unsigned) time(0));
		int N = 10;
		int *integers = new int[N];
		char *chars = new char[N];

		for (int i = 0; i < N; ++i)
		{
			integers[i] = i + 1;
			chars[i] = 'A' + rand() % 24;
		}

		iter(integers, N, multiply<int>);
		iter(integers, N, print<int>);
		std::cout << std::endl;

		iter(chars, N, toUppercase<char>);
		iter(chars, N, print<char>);
		std::cout << std::endl;
	}
	{
		int tab[] = { 0, 1, 2, 3, 4 };
		Awesome tab2[5];
		iter(tab, 5, print);
		iter(tab2, 5, print);
		std::cout << std::endl;
	}
}
