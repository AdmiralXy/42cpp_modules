#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
		: Form("PresidentialPardonForm", 25, 5), target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form)
		: Form(form.getName(), form.getGradeToSign(), form.getGradeToExecute()), target(form.target)
{
	*this = form;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &form)
{
	(void)form;
	return *this;
}

std::string PresidentialPardonForm::getTarget() const
{
	return target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (isAbleToExecute(executor))
		std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
