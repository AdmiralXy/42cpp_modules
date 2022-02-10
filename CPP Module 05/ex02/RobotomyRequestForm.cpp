#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target)
		: Form("RobotomyRequestForm", 72, 45), target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form)
		: Form(form.getName(), form.getGradeToSign(), form.getGradeToExecute()), target(form.target)
{
	*this = form;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &form)
{
	(void)form;
	return *this;
}

std::string RobotomyRequestForm::getTarget() const
{
	return target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (isAbleToExecute(executor))
	{
		if (std::rand() % 2)
			std::cout << target << " has been robotomized successfully 50% of the time." << std::endl;
		else
			std::cout << "Robotomy failed." << std::endl;
	}
}
