#include "Bureaucrat.hpp"

int	main(void)
{
	{
		Bureaucrat bureaucrat("Oleg", 25);
		std::cout << "name: " << bureaucrat.getName() << std::endl;
		std::cout << "grade: " << bureaucrat.getGrade() << std::endl;
		bureaucrat.incrementGrade();
		std::cout << "incrementGrade: " << bureaucrat << std::endl;
		bureaucrat.decrementGrade();
		std::cout << "decrementGrade: " << bureaucrat << std::endl;
	}
	{
		try
		{
			Bureaucrat a("Oleg", 0);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat a("Oleg", 151);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat a("Oleg", 1);
			a.incrementGrade();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat a("Oleg", 150);
			a.decrementGrade();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
