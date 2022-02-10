#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
		: Form("ShrubberyCreationForm", 145, 137), target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form)
		: Form(form.getName(), form.getGradeToSign(), form.getGradeToExecute()), target(form.target)
{
	*this = form;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form)
{
	(void)form;
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const
{
	return target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (isAbleToExecute(executor))
		std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
