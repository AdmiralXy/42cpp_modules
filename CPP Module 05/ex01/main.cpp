#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	{
		std::cout << "------- Exceptions ----------" << std::endl;
		try
		{
			Form L1("L1", 151, 150);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			Form L2("L1", 0, 150);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "------- signForm() ----------" << std::endl;
		Bureaucrat Andrew("Andrew", 55);
		Form B1("B1", 50, 10);
		std::cout << B1 << std::endl;
		Andrew.signForm(B1);
		std::cout << B1 << std::endl;
	}
	{
		try
		{
			std::cout << "------- beSigned() ----------" << std::endl;
			Bureaucrat Antony("Antony", 56);
			Form L3("L3", 55, 10);
			L3.beSigned(Antony);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
