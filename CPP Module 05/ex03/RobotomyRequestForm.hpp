#ifndef INC_42CPP_MODULES_ROBOTOMYREQUESTFORM_H
#define INC_42CPP_MODULES_ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();
	const std::string target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &form);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &form);
	std::string getTarget() const;
	virtual void execute(Bureaucrat const &executor) const;
};


#endif
