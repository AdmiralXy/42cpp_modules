#include <iostream>
#include <cstdlib>

class Base
{
public:
	virtual ~Base() { }
};

class A : public Base { };

class B : public Base { };

class C : public Base { };

Base *generate(void)
{
	std::srand((unsigned)time(NULL));
	int rand = std::rand() % 3;
	if (rand == 0)
		return new A;
	else if (rand == 1)
		return new B;
	else
		return new C;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	else if (dynamic_cast<B*>(p))
		std::cout << "B";
	else if (dynamic_cast<C*>(p))
		std::cout << "C";
	else
		std::cout << "This type is not found";
	std::cout << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (const std::exception &e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (const std::exception &e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch (const std::exception &e)
			{
				std::cout << "This type is not found" << std::endl;
			}
		}
	}
}

int	main(void)
{
	Base *ptr = generate();
	Base &ref = *(generate());
	identify(ptr);
	identify(ref);
}
