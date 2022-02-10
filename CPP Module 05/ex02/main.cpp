#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Form *f1 = new PresidentialPardonForm("Home");
	Form *f2 = new RobotomyRequestForm("Home");
	Form *f3 = new ShrubberyCreationForm("Home");
	Bureaucrat andrew("Andrew", 6);
	andrew.executeForm(*f1);
	andrew.signForm(*f1);
	andrew.signForm(*f2);
	andrew.signForm(*f3);
	andrew.executeForm(*f1);
	andrew.executeForm(*f2);
	andrew.executeForm(*f3);
	return 0;
}
