#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern &form)
{
	*this = form;
}

Intern::~Intern()
{

}

Intern &Intern::operator=(const Intern &intern)
{
	(void)intern;
	return *this;
}

Form *Intern::makeForm(std::string form, std::string target)
{
	Form *result = 0;

	Form *forms[] = {
			new PresidentialPardonForm(target),
			new RobotomyRequestForm(target),
			new ShrubberyCreationForm(target)
	};

	std::string options[] = {
			"presidential pardon",
			"robotomy request",
			"shrubbery creation"
	};

	for (int i = 0; i < 3; i++)
	{
		if (form == options[i])
			result = forms[i];
		else
			delete forms[i];
	}

	if (!result)
		std::cout << "Intern did not find a form \"" << form << "\"" << std::endl;
	else
		std::cout << "Intern creates " << result->getName() << std::endl;

	return result;

}
