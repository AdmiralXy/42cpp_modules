#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern intern;

	Form *f1 = intern.makeForm("presidential pardon", "home");
	Form *f2 = intern.makeForm("some random request", "home");
	if (!f2)
		f2 = intern.makeForm("robotomy request", "home");
	Form *f3 = intern.makeForm("shrubbery creation", "home");
	Bureaucrat andrew("Andrew", 6);
	andrew.executeForm(*f1);
	andrew.signForm(*f1);
	andrew.signForm(*f2);
	andrew.signForm(*f3);
	andrew.executeForm(*f1);
	andrew.executeForm(*f2);
	andrew.executeForm(*f3);
	delete f1;
	delete f2;
	delete f3;
	return 0;
}
