#include "Fixed.hpp"

int main( void )
{
	{
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
	}
	{
		Fixed A(10.5f);
		Fixed B(5.3f);
		Fixed C = A + 5;
		Fixed D = C;
		std::cout << "Min/max test: " << std::endl;
		std::cout << "A = " << A << std::endl;
		std::cout << "B = " << B << std::endl;
		std::cout << "C = " << C << std::endl;
		std::cout << "D = " << D << std::endl;
		std::cout << "min(A, B) " << Fixed::min(A, B) << std::endl;
		std::cout << "max(A, B) " << Fixed::max(A, B) << std::endl;
		std::cout << "Operators test: " << std::endl;
		std::cout << "A > B: " << (A > B) << std::endl;
		std::cout << "A < B: " << (A < B) << std::endl;
		std::cout << "A >= B: " << (A >= B) << std::endl;
		std::cout << "A <= B: " << (A <= B) << std::endl;
		std::cout << "C == D: " << (C == D) << std::endl;
		std::cout << "A != B: " << (A != B) << std::endl;
		std::cout << "A + C: " << (A + C) << std::endl;
		std::cout << "A - C: " << (A - C) << std::endl;
		std::cout << "A * D: " << (A * D) << std::endl;
		std::cout << "A / D: " << (A / D) << std::endl;
	}
	return 0;
}
